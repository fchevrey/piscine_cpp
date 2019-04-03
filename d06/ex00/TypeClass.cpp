/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:09:22 by fchevrey          #+#    #+#             */
/*   Updated: 2019/04/03 15:18:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeClass.hpp"
#include <limits>
TypeClass::is_fun		TypeClass::is_arr[ARRAY_LENGTH] = {
		&TypeClass::is_char,
		&TypeClass::is_int,
		&TypeClass::is_float,
		&TypeClass::is_double
};
TypeClass::TypeClass()
{
	this->_src = "";
	this->_base_type = this->find_type(this->_src);
	this->fill_values(this->_src);
}

TypeClass::TypeClass(const std::string input)
{
	this->_src = input;
	this->_base_type = this->find_type(input);
	this->fill_values(this->_src);
}

TypeClass::TypeClass(const TypeClass &src)
{
	this->_base_type = src._base_type;
	this->_src = src._src;
	this->fill_values(this->_src);
}

TypeClass::~TypeClass()
{
}
int			TypeClass::getBaseType(void)
{
	return this->_base_type;
}

TypeClass & TypeClass::operator=(const TypeClass &rhs)
{
	this->_base_type = rhs._base_type;
	this->_src = rhs._src;
	this->fill_values(this->_src);
	return *this;
}
void			TypeClass::parse_float(const std::string src)
{
	std::string		sub = src.substr(0, src.length() -1);

	if (this->_base_type == FLOAT)
	{
		if (TypeClass::is_float_define(src))
		{
			this->_float_value = (float)std::atof(sub.c_str());
			//this->_float_value = get_float_define(src);
			this->_NaN = true;
		}
		else	
			this->_float_value = (float)std::atof(sub.c_str());
		this->_double_value = static_cast<double>(this->_float_value);
	}
	else
	{
		if (TypeClass::is_double_define(src))
		{
			this->_double_value = std::atof(src.c_str());
			//this->_double_value = get_double_define(src);
			this->_NaN = true;
		}
		else	
			this->_double_value = std::atof(src.c_str());
		this->_float_value = static_cast<float>(this->_double_value);
	}
	if (this->_NaN)
		return ;
	this->_int_value =  static_cast<int>(this->_float_value);
	if (this->_int_value < 127 || this->_int_value > -128)
		this->_char_value = static_cast<int>(this->_int_value);
}

void			TypeClass::fill_values(const std::string src)
{
	if (this->_base_type == TYPE_ERROR)
		return ;
	if (this->_base_type == FLOAT || this->_base_type == DOUBLE)
	{
		this->parse_float(src);
		return ;
	}
	this->_NaN = false;
	if (this->_base_type == INT)
	{
		this->_int_value = std::atoi(src.c_str());
		if (this->_int_value < 127 || this->_int_value > -128)
			this->_char_value = static_cast<int>(this->_int_value);
	}
	else if (this->_base_type == CHAR)
	{
		this->_char_value = src[1];
		this->_int_value =  static_cast<int>(this->_char_value);
	}
	this->_double_value = static_cast<double>(this->_int_value);
	this->_float_value = static_cast<float>(this->_int_value);
}

int			TypeClass::find_type(std::string src)
{
	if (src.empty())
		return TYPE_ERROR;
	for (int i = 0; i < ARRAY_LENGTH; i++ )
	{
		if (TypeClass::is_arr[i](src))
			return i + 1;
	}
	return TYPE_ERROR;
}
bool		TypeClass::is_between_int_bound(const std::string src)
{
	std::string		cmp;

	if (src[0] == '-')
		cmp = "-2147483648";
	else if (src[0] == '+')
		cmp = "+2147483647";
	else
		cmp = "2147483647";
	if (src.length() > cmp.length())
		return false;
	if (src.length() < cmp.length())
		return true;
	for (size_t i = 0; i < src.length(); i++)
	{
		if (src[i] > cmp[i])
			return false;
		if (src[i] < cmp[i])
			return true;
	}
	return true;
}

bool		TypeClass::is_int(const std::string src)
{
	size_t		i = 0;

	if (!is_between_int_bound(src))
		return false;
	while (i != src.length())
	{
		if (i == 0 && (src[i] == '-' || src[i] == '+') && src.length() > 1)
		{
			++i;
			continue ;
		}
		if (src[i] < '0' || src[i] > '9')
			return (false);
		++i;
	}
	return (true);
}

bool TypeClass::is_char(const std::string src)
{
	if (src.length() == 3 && src[0] == '\'' && src[2]== '\'')
		return true;
	return false;
}

bool TypeClass::is_float(const std::string src)
{
	size_t		i = 0;
	bool		dot = false;

	if (src[src.length() - 1] != 'f')
		return false;
	if (is_float_define(src))
		return true;
	while (i < (src.length() - 1))
	{
		if (i == 0 && (src[i] == '-' || src[i] == '+') && src.length() > 1)
		{
			++i;
			continue ;
		}
		if (src[i] == '.' && !dot)
			dot = true;
		else if (src[i] < '0' || src[i] > '9')
			return (false);
		++i;
	}
	return (true);
}

bool TypeClass::is_float_define(const std::string src)
{
	size_t		i = 0;
	std::string		def[] = {
		"nanf",
		"-inff",
		"+inff"
	};
	std::string pouet;
	while (i < 3)
	{
		if (!(src.compare(def[i])))
			return true;
		i++;
	}
	return false;
}

float TypeClass::get_float_define(const std::string src)
{
	if (src.compare("nanf"))
		return std::numeric_limits<float>::quiet_NaN();
	if (src.compare("-inff"))
		return -std::numeric_limits<float>::infinity();
	if (src.compare("+inff"))
		return std::numeric_limits<float>::infinity();
	return (0.0f);
}

double TypeClass::get_double_define(const std::string src)
{
	if (src.compare("nan"))
		return std::numeric_limits<double>::quiet_NaN();
	if (src.compare("-inf"))
		return -std::numeric_limits<double>::infinity();
	if (src.compare("+inf"))
		return std::numeric_limits<double>::infinity();
	return (0.0);
}

bool TypeClass::is_double(const std::string src)
{
	size_t		i = 0;
	bool		dot = false;

	if (is_double_define(src))
		return true;
	while (i != src.length())
	{
		if (i == 0 && (src[i] == '-' || src[i] == '+') && src.length() > 1)
		{
			++i;
			continue ;
		}
		if (src[i] == '.' && !dot)
			dot = true;
		else if (src[i] < '0' || src[i] > '9')
			return (false);
		++i;
	}
	return (true);
}

bool TypeClass::is_double_define(const std::string src)
{
	size_t		i = 0;
	std::string		def[] = {
		"nan",
		"-inf",
		"+inf"
	};
	std::string pouet;
	while (i < 3)
	{
		if (!(src.compare(def[i])))
			return true;
		i++;
	}
	return false;
}
TypeClass::operator char()
{
	if (this->_base_type == TYPE_ERROR || this->_NaN)
		throw std::exception();
	if (this->_base_type == CHAR)
		return this->_char_value;
	if (this->_int_value < 127 && this->_int_value > -128)
		return this->_char_value;
	throw std::exception();
}

TypeClass::operator int()
{
	if (this->_base_type == TYPE_ERROR || this->_NaN)
		throw std::exception();
	if (this->_base_type == FLOAT || this->_base_type == DOUBLE)
		if (this->_float_value > std::numeric_limits<int>::max() ||
				this->_float_value < std::numeric_limits<int>::min())
			throw std::exception();
	return this->_int_value;
}

TypeClass::operator float()
{
	if (this->_base_type == TYPE_ERROR)
		throw std::exception();
	return this->_float_value;
}

TypeClass::operator double()
{
	if (this->_base_type == TYPE_ERROR)
		throw std::exception();
	return this->_double_value;
}
std::string		TypeClass::getStrBaseType(void)
{
	if (this->_base_type == INT)
		return ("int");
	if (this->_base_type == CHAR)
		return ("char");
	if (this->_base_type == FLOAT)
		return ("float");
	if (this->_base_type == DOUBLE)
		return ("double");
	if (this->_base_type == TYPE_ERROR)
		return ("TYPE ERROR");
	return ("UNKNOWN");
}

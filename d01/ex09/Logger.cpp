/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:38:55 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 18:23:00 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

Logger::Logger(std::string filename) : _filename(filename)
{
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	std::string str;
	void (Logger::*f[2])(std::string const &);
	std::string		choise[2];
	int				i = 0;

	f[0] = &Logger::logToConsole;
	f[1] = &Logger::logToFile;
	choise[0] = "console";
	choise[1] = "file";
	while (i < 2)
	{
		if (!choise[i].compare(dest))
			break;
		i++;
	}
	str = Logger::makeLogEntry(message);
	(this->*f[i])(str);
}

void			Logger::logToConsole(std::string const &str)
{
	std::cout << str << std::endl;
}

void			Logger::logToFile(std::string const &str)
{
	std::ofstream	ofs;

	ofs.open(_filename, std::fstream::app);
	if (!ofs || !ofs.is_open())
		return ;
	ofs << str << std::endl;
	ofs.close();
}

std::string		Logger::makeLogEntry(std::string const &src)
{
	time_t	now = time(0);
	tm		*time;
	int		year;
	std::stringstream dst;


	time = localtime(&now);
	year = 1900 + time->tm_year;
	dst << "["  << year;
	dst.width(2);
	dst.fill('0');
	dst << (time->tm_mon + 1);// 0 a 11
	dst.width(2);
	dst.fill('0');
	dst << (time->tm_mday); //1 a 31
	dst << "_";
	dst.width(2);
	dst.fill('0');
	dst << time->tm_hour;
	dst.width(2);
	dst.fill('0');
	dst << time->tm_min;
	dst.width(2);
	dst.fill('0');
	dst << time->tm_sec << "] ";
	dst << src;
	return dst.str();
}

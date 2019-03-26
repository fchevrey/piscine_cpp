/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 12:12:42 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 15:44:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string		readfile(std::string filename)
{
	std::ifstream	ifs(filename);
	std::string		content;
	std::string		buff;
	bool			first = true;

	if (!ifs || !ifs.is_open())
	{
		std::cout << "open error" << std::endl;
		return content;
	}
	while (!ifs.eof())
	{
		std::getline(ifs, buff);
		if (!first && !ifs.eof())
		{
			content.append("\n");
		}
		if (!buff.empty())
			content.append(buff);
		first = false;
	}
	ifs.close();
	if (content.empty())
		std::cout << "empty file" << std::endl;
	return content;
}

std::string		sed(std::string *content, std::string s1, std::string s2)
{
	std::string		dst = "";
	size_t			pos = 0;
	size_t			lastpos = 0;
	
	while (pos != std::string::npos)
	{
		pos = content->find(s1, lastpos);
		if (pos != std::string::npos)
		{
			dst.append(content->substr(lastpos, pos - lastpos) + s2);
		}
		else
		{
			dst.append(content->substr(lastpos, content->length() - lastpos));
		}
		lastpos = pos + s1.length();
	}
	return dst;
}

void		writefile(std::string filename, std::string *str)
{
	std::ofstream	ofs(filename + ".replace");

	if (!ofs || !ofs.is_open())
		return ;
	ofs << *str << std::endl;
	ofs.close();
}


int		main(int argc, const char *argv[])
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		content;
	std::string		dst;

	if (argc < 4)
	{
		std::cout << "usage : ./replace \"filname\" \"s1\" \"s2\"" << std::endl;
		return (0);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "don't accept empty field" << std::endl;
		return (0);
	}
	content = readfile(filename);
	if (content.empty())
	{
		return 0;
	}
	dst = sed(&content, s1, s2);
	writefile(filename, &dst);
	return (0);
}

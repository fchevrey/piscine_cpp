#include <iostream>
#include <fstream>

bool	readfile(std::string filename)
{
	std::ifstream	ifs(filename);
	std::string		content;
	char			buff[101];

	if (!ifs.is_open())
		return false;
	std::getline(ifs, content);
	std::cout << "content= " << content << std::endl;
	ifs >> content;
	std::cout << "content = " << content << std::endl;
	ifs.getline(buff, 100, '\n');
	std::cout << "content " << buff <<  std::endl;
	if (ifs.eof())
		std::cout << "eof"<< std::endl;
	else
		return true;
	ifs.close();
	return (true);
}

int		main(int argc, const char *argv[])
{
	std::string		filename;

	if (argc < 2)
		return (0);
	filename = argv[1];
	if (filename.empty())
		return (0);
	readfile(filename);
	return (0);
}

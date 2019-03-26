#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <string>

class Logger
{
	public :
		Logger(std::string filename);
		void	log(std::string const &dest, std::string const &message);

	private :
		void			logToConsole(std::string const &str);
		void			logToFile(std::string const &str);
		std::string		makeLogEntry(std::string const &src);

		std::string		_filename;
};

#endif

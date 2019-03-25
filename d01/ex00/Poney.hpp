#ifndef PONEY_HPP
# define PONEY_HPP
# include <string>

class Poney
{
	public :
		Poney(void);
		Poney(int size, bool shodded, std::string color);
		~Poney(void);

		void			Gambol(void);
		void			Jump(void);
		std::string		GetColor(void);
		void			SetColor(std::string);
		bool			IsShodded(void);
		void			SetShodded(bool value);

	private :
		int				_size;
		bool			_shodded;
		std::string		_color;
};

#endif

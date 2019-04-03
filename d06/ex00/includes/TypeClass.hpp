#ifndef TYPECLASS_HPP
# define TYPECLASS_HPP

# include <string>
# define TYPE_ERROR 0
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4
# define ARRAY_LENGTH 4

class TypeClass
{
	public :
		TypeClass(std::string  input);
		TypeClass(const TypeClass & src);
		virtual		~TypeClass();

		int				getBaseType(void);
		std::string		getStrBaseType(void);

		operator char();
		operator int();
		operator float();
		operator double();
		TypeClass &	operator=(const TypeClass & rhs);
	protected :
		TypeClass();
		typedef			bool (*is_fun)(const std::string);
		std::string		_src;
		int				_base_type;
		char			_char_value;
		int				_int_value;
		float			_float_value;
		double			_double_value;
		bool			_NaN;

		void			parse_float(const std::string src);
		void			fill_values(const std::string src);
		int				find_type(const std::string src);
		static bool		is_between_int_bound(const std::string src);
		static bool		is_int(const std::string src);
		static bool		is_char(const std::string src);
		static bool		is_float(const std::string src);
		static bool		is_float_define(const std::string src);
		static float	get_float_define(const std::string src);
		static bool		is_double(const std::string src);
		static bool		is_double_define(const std::string src);
		static double	get_double_define(const std::string src);
		static	is_fun	is_arr[ARRAY_LENGTH];
};

#endif

#ifndef EVAL_EXPR_HPP
# define EVAL_EXPR_HPP
# include "Fixed.class.hpp"

Fixed	compute(std::string src);
bool	is_number(std::string src);
bool	is_number(char *src);

#endif

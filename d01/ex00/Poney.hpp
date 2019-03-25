/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:16:19 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 17:16:21 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONEY_HPP
# define PONEY_HPP
# include <string>

class Poney
{
	public :
		Poney(void);
		Poney(int size, bool shodded, std::string color, std::string name,
				bool isfemale);
		~Poney(void);

		void			Gambol(void);
		void			Jump(void);
		std::string		GetColor(void);
		void			SetColor(std::string color);
		bool			IsShodded(void);
		void			SetShodded(bool value);
		std::string		GetName(void);
		void			SetName(std::string name);
		bool			GetIsFemale(void);
		bool			GetIsMale(void);

	private :
		int				_size;
		bool			_shodded;
		std::string		_color;
		std::string		_name;
		bool			_female;
};

#endif

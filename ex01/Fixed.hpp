/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:37:51 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/14 11:36:45 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
#define FIXED__HPP

#include <iostream>
#include <ostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator =(const Fixed &f);
		~Fixed(void);


		Fixed(const int in);
		Fixed(const float flt);
		float toFloat( void ) const;
		int toInt( void ) const;
		
		int getRawBits( void ) const;
		void setRawBits(int const raw);
	private:
		int fxd;
		static const int fra;
};

ostream &operator << (ostream &output, const Fixed &f);

#endif
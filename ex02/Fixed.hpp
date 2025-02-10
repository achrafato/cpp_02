/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:37:51 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/30 10:07:07 by aibn-che         ###   ########.fr       */
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
		
		bool operator >(const Fixed &f) const;
		bool operator >=(const Fixed &f) const;
		bool operator <(const Fixed &f) const;
		bool operator <=(const Fixed &f) const;
		bool operator ==(const Fixed &f) const;
		bool operator !=(const Fixed &f) const;

		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &n1, Fixed &n2);
		static const Fixed &min(const Fixed &n1, const Fixed &n2);
		static Fixed &max(Fixed &n1, Fixed &n2);
		static const Fixed &max(const Fixed &n1, const Fixed &n2);

	private:
		int fxd;
		static const int fra;
};

ostream &operator << (ostream &output, const Fixed &f);

#endif

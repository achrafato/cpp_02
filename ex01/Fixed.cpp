/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:38:25 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/30 10:23:23 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

const int Fixed::fra = 8;

Fixed::Fixed(const int in):fxd(in * (1 << fra))
{
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float flt):fxd(roundf(flt * (1 << fra)))
{
   cout << "Float constructor called" << endl;
}

Fixed &Fixed::operator =(const Fixed &f)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &f)
	{
		fxd = f.fxd;
	}
	return *this;
}

float Fixed::toFloat(void) const
{
	return ((float)(fxd) / (float)(1 << fra));
}

int Fixed::toInt(void) const
{
	return (fxd / (1 << fra));
}

ostream &operator<<(ostream &output, const Fixed &f)
{
	output << f.toFloat();
	return output;
}

Fixed::Fixed(void)
{
	cout << "Default constructor called" << endl;
	this->fxd = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	cout << "Copy constructor called" << endl;
	fxd = obj.fxd;
}

int Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return fxd;
}

void Fixed::setRawBits(int const raw)
{
	fxd = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

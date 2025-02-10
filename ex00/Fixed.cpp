/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:38:25 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/01 10:07:58 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::b = 8;

Fixed::Fixed(void)
{
	cout << "Default constructor called" << endl;
	this->a = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	cout << "Copy constructor called" << endl;
	a = obj.getRawBits();
}

Fixed &Fixed::operator =(const Fixed &f)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &f)
	{
		a = f.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return a;
}

void Fixed::setRawBits(int const raw)
{
	a = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:38:25 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/30 20:21:33 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fra = 8;

Fixed::Fixed(const int in):fxd(in * (1 << fra))
{
}

Fixed::Fixed(const float flt):fxd(roundf(flt * (1 << fra)))
{
}

Fixed &Fixed::operator =(const Fixed &f)
{
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
	this->fxd = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    fxd = obj.fxd;
}

int Fixed::getRawBits( void ) const
{
	return fxd;
}

void Fixed::setRawBits(int const raw)
{
	fxd = raw;
}

Fixed::~Fixed(void)
{
}


///////Comparaison///////

bool Fixed::operator>(const Fixed &f) const
{
    return (fxd > f.fxd);
}

bool Fixed::operator >=(const Fixed &f) const
{
    return (this->fxd >= f.fxd);
}

bool Fixed::operator <(const Fixed &f) const
{
    return (this->fxd < f.fxd);
}

bool Fixed::operator <=(const Fixed &f) const
{
    return (this->fxd <= f.fxd);
}

bool Fixed::operator ==(const Fixed &f) const
{
    return (this->fxd == f.fxd);
}

bool Fixed::operator !=(const Fixed &f) const
{
    return (this->fxd != f.fxd);
}

///////Comparaison///////






///////arithmetic///////

Fixed Fixed::operator+(const Fixed &f) const
{
    return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
    return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
    return Fixed(this->toFloat() / f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
    return Fixed(this->toFloat() * f.toFloat());
}

///////arithmetic///////




///////Increment / Decrement///////

//prefix
Fixed &Fixed::operator++(void) {
    ++this->fxd;
    return *this;
}

//  The int parameter is used to differentiate the postfix increment operator from the prefix increment operator.
Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++this->fxd;
    return tmp;
}

Fixed &Fixed::operator--(void) {
    --this->fxd;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --this->fxd;
    return tmp;
}

///////Increment / Decrement///////




///////Min / Max///////

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1.fxd < n2.fxd)
        return (n1);
    else
        return (n2);
}

Fixed const &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1.fxd < n2.fxd)
        return (n1);
    else
        return (n2);
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1.fxd > n2.fxd)
        return (n1);
    else
        return (n2);
}

Fixed const &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1.fxd > n2.fxd)
        return (n1);
    else
        return (n2);
}

///////Min / Max///////
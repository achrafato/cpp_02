/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:16:44 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/29 15:42:30 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):_x(0), _y(0)
{
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
}

Point::Point(const Point &p) : _x(p.getX()), _y(p.getY())
{
}

Point& Point::operator=(const Point &p)
{
    (void)p;
    return *this;
}

Point::~Point()
{
}

const Fixed Point::getX(void) const
{
    return _x;
}

const Fixed Point::getY(void) const
{
    return _y;
}

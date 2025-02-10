/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:16:24 by aibn-che          #+#    #+#             */
/*   Updated: 2024/08/20 10:49:16 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point(void);
        Point(const Fixed x, const Fixed y);
        Point(const Point &p);
        Point& operator=(const Point &p);
        ~Point(void);
        const Fixed getX( void ) const;
        const Fixed getY( void ) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif

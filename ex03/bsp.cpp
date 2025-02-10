/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:14:11 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/01 10:21:49 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return abs((x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1-y2)) / 2.0);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A;
    float a_v;
    float b_v;
    float c_v;

    float x;
    float y;
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;

    x = point.getX().toFloat();
    y = point.getY().toFloat();

    x1 = a.getX().toFloat();
    y1 = a.getY().toFloat();
    x2 = b.getX().toFloat();
    y2 = b.getY().toFloat();
    x3 = c.getX().toFloat();
    y3 = c.getY().toFloat();

    A = area(x1, y1, x2, y2, x3, y3);
    cout << "are of triangle " << A << endl;
    // PBC
    a_v = area(x, y, x2, y2, x3, y3);
    cout << "A = " << a_v << endl;
    // PAC
    b_v = area(x1, y1, x, y, x3, y3);
    cout << "B = " << b_v << endl;
    // PAB
    c_v = area(x1, y1, x2, y2, x, y);
    cout << "C = " << c_v << endl;

    if (a_v == 0.0 || b_v == 0.0 || c_v == 0.0)
        return (0);
    return (A == (a_v + b_v + c_v));
}

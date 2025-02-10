/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:14:59 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/01 10:18:36 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
    Fixed x(10);
    Fixed y(15);

    Fixed x1(0);
    Fixed y1(0);

    Fixed x2(10);
    Fixed y2(30);

    Fixed x3(20);
    Fixed y3(0);



    Point p(x, y);

    Point A(x1, y1);

    Point B(x2, y2);

    Point C(x3, y3);

    cout << bsp(A, B, C, p) << endl;

    return (0);
}

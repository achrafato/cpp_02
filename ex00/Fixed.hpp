/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:37:51 by aibn-che          #+#    #+#             */
/*   Updated: 2024/08/16 10:15:48 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
#define FIXED__HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator =(const Fixed &f);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
	private:
		int a;
		static const int b;
};

#endif
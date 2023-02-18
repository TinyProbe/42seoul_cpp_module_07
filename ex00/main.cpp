/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:39:44 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 07:00:56 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "temfunc.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	temfunc::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << temfunc::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << temfunc::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	temfunc::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << temfunc::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << temfunc::max( c, d ) << std::endl;
}

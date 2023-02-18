/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 07:24:21 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 09:25:05 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> arr(10);
	for (int i = 0; i < (int) arr.size(); ++i) {
		std::cout << arr[i] << " -> ";
		arr[i] += i;
		std::cout << arr[i] << '\n';
	}
	try {
		std::cout << arr[10] << '\n';
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	Array<std::string> arr2(10);
	for (int i = 0; i < (int) arr2.size(); ++i) {
		arr2[i] += "Hey!";
		std::cout << arr2[i] << " -> ";
		arr2[i] += " Hello World!";
		std::cout << arr2[i] << '\n';
	}
	try {
		std::cout << arr2[10] << '\n';
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
}

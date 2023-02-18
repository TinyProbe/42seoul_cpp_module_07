/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:57:19 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 07:15:36 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

#define MAX_ARR 10

void increase100(int& a) {
	a += 100;
}
void attach_something(std::string& a) {
	a += "_something";
}

int main() {
	{
		int arr[MAX_ARR] = {};
		for (int i = 0; i < MAX_ARR; ++i) {
			std::cout << "arr[" << i << "]: " << arr[i] << '\n';
		}
		temfunc::iter(arr, MAX_ARR, increase100);
		for (int i = 0; i < MAX_ARR; ++i) {
			std::cout << "arr[" << i << "]: " << arr[i] << '\n';
		}
	}
	{
		std::string arr[MAX_ARR] = { "hello", };
		for (int i = 0; i < MAX_ARR; ++i) {
			std::cout << "arr[" << i << "]: " << arr[i] << '\n';
		}
		temfunc::iter(arr, MAX_ARR, attach_something);
		for (int i = 0; i < MAX_ARR; ++i) {
			std::cout << "arr[" << i << "]: " << arr[i] << '\n';
		}
	}
}

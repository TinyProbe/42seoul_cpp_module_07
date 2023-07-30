/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:57:19 by tkong             #+#    #+#             */
/*   Updated: 2023/07/30 15:43:16 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

#define MAX_ARR 5

void add(int &a) { a += 10; }
void attach(std::string &a) { a += "Hello World!"; }
template <class T> void print(const T &a) {
	static const size_t MAX = MAX_ARR;
	static size_t i;
	std::cout << "arr[" << i++ << "]: " << a << ", ";
	if (i >= MAX) { i = 0; }
}

int main() {
	{
		int arr[MAX_ARR] = {};
		::iter(arr, MAX_ARR, print<int>); std::cout << '\n';
		::iter(arr, MAX_ARR, add);
		::iter(arr, MAX_ARR, print<int>); std::cout << '\n';
	}
	{
		std::string arr[MAX_ARR] = {};
		::iter(arr, MAX_ARR, print<std::string>); std::cout << '\n';
		::iter(arr, MAX_ARR, attach);
		::iter(arr, MAX_ARR, print<std::string>); std::cout << '\n';
	}
}

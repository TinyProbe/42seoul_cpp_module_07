/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:57:19 by tkong             #+#    #+#             */
/*   Updated: 2023/07/28 12:38:00 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

#define MAX_ARR 5

void add(int &a) { a += 10; }
void attach(std::string &a) { a += "Hello World!"; }
template <class T> void print(const T &a) {
	static size_t i;
	std::cout << "arr[" << (i++)%MAX_ARR << "]: " << a << ", ";
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

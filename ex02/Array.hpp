/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 07:24:22 by tkong             #+#    #+#             */
/*   Updated: 2023/07/28 11:52:52 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstring>
#include <stdexcept>

template <class T>
class Array {
	T* ptr;
	size_t n;

public:
	Array();
	Array(const Array& rhs);
	Array(size_t n);
	virtual ~Array();
	virtual Array& operator=(const Array& rhs);
	virtual T& operator[](size_t idx);

	virtual size_t size() const;

};

#include "Array.tpp"

#endif

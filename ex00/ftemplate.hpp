/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftemplate.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:39:45 by tkong             #+#    #+#             */
/*   Updated: 2023/07/28 12:09:34 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FTEMPLATE_HPP
#define FTEMPLATE_HPP

template <class T> void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}
template <class T> T min(const T &a, const T &b) {
	if (a < b) { return a; }
	return b;
}
template <class T> T max(const T &a, const T &b) {
	if (a > b) { return a; }
	return b;
}

#endif

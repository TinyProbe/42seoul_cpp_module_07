/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temfunc.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 06:39:45 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 06:53:51 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TEMFUNC_HPP
#define TEMFUNC_HPP

namespace temfunc {
	template <class T>
	void swap(T& a, T& b) {
		T tmp = a;
		a = b;
		b = tmp;
	}

	template <class T>
	T& min(T& a, T& b) {
		if (a < b) {
			return a;
		}
		return b;
	}

	template <class T>
	T& max(T& a, T& b) {
		if (a > b) {
			return a;
		}
		return b;
	}
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:58:28 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/27 18:10:51 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b) {
	T	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T		min(T a, T b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T		max(T a, T b) {
	if (a > b)
		return (a);
	else
		return (b);
}

#endif // WHATEVER_HPP

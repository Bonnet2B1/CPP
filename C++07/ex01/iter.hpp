/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:14:40 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/27 18:45:37 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, int length, void (*function)(T&)) {
	for (int i = 0; i < length; i++) {
		function(array[i]);
	}
}

template <typename T>
void	ftPlusOne(T &n) {
	n += 1;
}


#endif // ITER_HPP

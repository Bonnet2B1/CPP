/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:27:41 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/06 17:09:41 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template <typename T>
typename T::value_type easyfind(T& container, int nbr)
{
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		if (*it == nbr)
			return *it;
		++it;
	}
	throw std::exception();
}

#endif
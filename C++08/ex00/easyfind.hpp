/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:27:41 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 15:42:13 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include "nothingFoundException.hpp"

template <typename T>
typename T::value_type easyFind(T container, int nbr)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nbr);
	if (*it != nbr)
		throw (nothingFoundException("Nothing found here :/"));
	return *it;
}

#endif

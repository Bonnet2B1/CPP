/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:01:56 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/29 20:52:46 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	Ice(const Ice &src);
	~Ice();
	Ice &operator = (const Ice &rhs);

	Ice *clone() const;
};

#endif // ICE_HPP

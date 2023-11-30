/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:09 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 02:28:12 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "../AMateria/AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	Cure(const Cure &src);
	~Cure();
	Cure &operator = (const Cure &rhs);

	Cure *clone() const;
};

#endif // CURE_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:09 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:10 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

class Cure {

public:
	Cure();
	Cure(const Cure &src);
	virtual ~Cure();
	Cure &operator = (const Cure &rhs);

private:

};

#endif // CURE_HPP

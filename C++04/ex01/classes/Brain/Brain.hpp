/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:15:44 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 18:18:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

public:
	Brain();
	Brain(const Brain &src);
	virtual ~Brain();
	Brain &operator = (const Brain &rhs);

private:
	std::string ideas[100];

};

#endif // BRAIN_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:48 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/29 15:47:57 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {

public:
	virtual	~Base();
	void	identify(Base* p);
	void	identify(Base& p);
	
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*		generate(void);

#endif // BASE_HPP

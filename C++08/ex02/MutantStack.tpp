/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:50:03 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/14 17:09:22 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() : std::stack<T>() {}
	MutantStack<T>(const MutantStack &src) : std::stack<T>(src) {}
	virtual ~MutantStack<T>() {}

	MutantStack &operator = (const MutantStack &rhs)
	{
		std::stack<T>::operator=(rhs);
		return (*this);
	}

	typedef typename std::deque<T>::iterator iterator;
	iterator	begin() { return (this->c.begin()); }
	iterator	end() { return (this->c.end()); }

private:

};

#endif // MUTANTSTACK_HPP

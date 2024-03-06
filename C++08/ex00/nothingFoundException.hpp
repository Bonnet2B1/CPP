/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nothingFoundException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:22:11 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/06 20:28:52 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTHINGFOUNDEXCEPTION_HPP
# define NOTHINGFOUNDEXCEPTION_HPP

# include <iostream>

class nothingFoundException : public std::exception
{
public:
	nothingFoundException(const char* message);
	virtual const char* what() const throw() {
		return this->_message;
	}

private:
	const char* _message;

};

#endif // NOTHINGFOUNDEXCEPTION_HPP

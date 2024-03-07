/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nothingFoundException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:22:11 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 22:32:34 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTHINGFOUNDEXCEPTION_HPP
# define NOTHINGFOUNDEXCEPTION_HPP

# include <iostream>

class nothingFoundException : public std::exception
{
public:
	nothingFoundException();
	nothingFoundException(const char* message);
	nothingFoundException(const nothingFoundException &src);
	virtual ~nothingFoundException() throw();
	nothingFoundException &operator=(const nothingFoundException &src);

	virtual const char* what() const throw() {
		return this->_message;
	}

private:
	const char* _message;

};

#endif // NOTHINGFOUNDEXCEPTION_HPP

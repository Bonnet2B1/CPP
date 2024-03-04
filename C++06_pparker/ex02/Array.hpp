/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:23:17 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/04 09:58:40 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

public:
	Array<T>() : _size(0) {
		_array = new T[0]();
	};
	~Array<T>() {
		delete [] _array;
	};
	Array<T>(unsigned int n) : _size(n) {
		_array = new T[n]();
	};
	Array<T>(const Array<T> &src) {
		_array = NULL;
		*this = src;
	};
	Array<T> &operator=(const Array<T> &rhs) {
		_size = rhs._size;
		if (_array != NULL)
			delete [] _array;
		_array = new T[size()]();
		for (int i = 0; i < size() ; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	};
	T &operator[](int index) {
		if (index >= size() || index < 0)
			throw OutOfBound();
		return (_array[index]);
	}
	const T &operator[](int index) const {
		if (index >= size() || index < 0)
			throw OutOfBound();
		return (_array[index]);
	}
	int	size() const {
		return (_size);
	}

	class OutOfBound : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Index out of bound !");
		}
	};

private:
	int	_size;
	T *_array;
};

#endif

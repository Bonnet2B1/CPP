/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:31 by edelarbr          #+#    #+#             */
/*   Updated: 2024/04/23 16:01:58 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct Data;

class Serializer {

public:
	virtual ~Serializer();
	Serializer &operator = (const Serializer &rhs);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);

};

#endif // SERIALIZER_HPP

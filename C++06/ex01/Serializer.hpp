/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:31 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/26 20:32:25 by edelarbr         ###   ########.fr       */
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

	static __intptr_t	serialize(Data* ptr);
	static Data*		deserialize(__intptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);

};

#endif // SERIALIZER_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:21 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/04 14:07:18 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int main() {
	Data*		ptr = new Data;
	__intptr_t	serialized = 0;

	ptr->proof = "Hehehehe";

	std::cout << "ptr->proof: " << ptr->proof << std::endl;
	serialized = Serializer::serialize(ptr);
	std::cout << "serialization" << std::endl;

	std::cout << "ptr: " << ptr << std::endl;
	ptr = NULL;
	std::cout << "ptr: " << ptr << std::endl;

	ptr = Serializer::deserialize(serialized);
	std::cout << "deserialization" << std::endl;
	std::cout << "ptr->proof: " << ptr->proof << std::endl;


	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:52:52 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 23:07:08 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try { sp.addNumber(42); }
	catch (std::exception &e) { std::cout << e.what() << std::endl;	}

	std::cout << std::endl;

	Span sp2(100000);
	sp2.appendRandomNumbers(1);
	try { std::cout << sp2.longestSpan() << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
	sp2.appendRandomNumbers(99999);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return (0);
}

/*
expected result:
2
14
*/

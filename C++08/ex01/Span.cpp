/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:34:50 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/14 16:53:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(const Span &src) : _N(src._N) { *this = src; }

Span::~Span() {}

Span &Span::operator = (const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_span.assign(rhs._span.begin(), rhs._span.end());
	}
	return (*this);
}

Span::Span(unsigned int N) : _N(N) {}

void	Span::addNumber(int nbr)
{
	if (this->_span.size() < this->_N)
		this->_span.push_back(nbr);
	else
		throw SpanException("Already full");
}

int	Span::shortestSpan() const
{
	if (this->_span.size() < 2)
		throw SpanException("Not enough data");

	std::vector<int>					spanCopy(this->_span);
	std::vector<int>::const_iterator	it1;
	std::vector<int>::const_iterator	it2;
	int									gap;

	std::sort(spanCopy.begin(), spanCopy.end());
	for (it1 = spanCopy.begin(), it2 = it1 + 1, gap = *it2 - *it1; it2 != spanCopy.end(); it1++, it2++)
	{
		if (gap > *it2 - *it1)
			gap = *it2 - *it1;
	}
	return (gap);
}

int	Span::longestSpan() const
{
	if (this->_span.size() < 2)
		throw SpanException("Not enough data");

	std::vector<int>::const_iterator	maxIt;
	std::vector<int>::const_iterator	minIt;

	maxIt = std::max_element(this->_span.begin(), this->_span.end());
	minIt = std::min_element(this->_span.begin(), this->_span.end());
	return (*maxIt - *minIt);
}

void Span::appendRandomNumbers(int add)
{
	if (this->_span.size() + add > this->_N)
	{
		std::cout << "Not enough space\n";
		return;
	}

	std::srand(time(0));
	std::generate_n(std::back_inserter(this->_span), add, std::rand);
}

void	Span::printSpanContent() const
{
	std::vector<int>::const_iterator	it;
	for (it = this->_span.begin(); it != this->_span.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

}

Span::SpanException::SpanException() : _message("SpanException") {}

Span::SpanException::SpanException(const SpanException &src) : _message(src._message) {}

Span::SpanException::~SpanException() throw() {}

Span::SpanException &Span::SpanException::operator = (const SpanException &rhs)
{
	if (this != &rhs)
		this->_message = rhs._message;
	return (*this);
}

Span::SpanException::SpanException(const char* message) : _message(message) {}

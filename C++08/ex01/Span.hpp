/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:34:54 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 23:06:30 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	virtual ~Span();
	Span &operator = (const Span &rhs);

	void	addNumber(int nbr);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	appendRandomNumbers(int add);
	void	printSpanContent() const;

	class SpanException : public std::exception
	{
	public:
		SpanException();
		SpanException(const SpanException &src);
		virtual ~SpanException() throw();
		SpanException &operator = (const SpanException &rhs);
		SpanException(const char* message);
		const char* what() const throw() { return _message; }

	private:
		const char* _message;

	};

private:
	unsigned int		_N;
	std::vector<int>	_span;

};

#endif // SPAN_HPP

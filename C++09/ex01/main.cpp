/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:50:21 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/09 22:57:06 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

bool	strIsNum(std::string str)
{
	if (str.length() > 1)
		return false;
	if (str[0] < '0' || str[0] > '9')
		return false;
	return true;
}

bool	strIsSign(std::string str)
{
	if (str.length() > 1)
		return false;
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
		return true;
	return false;
}

void	makeOperation(char sign, std::stack<int> *stack)
{
	int		num1;
	int		num2;
	size_t	result;

	num2 = stack->top();
	stack->pop();
	num1 = stack->top();
	stack->pop();
	if (sign == '+')
		result = (num1 + num2);
	else if (sign == '-')
		result = (num1 - num2);
	else if (sign == '*')
		result = (num1 * num2);
	else if (sign == '/')
	{
		if (num2 == 0)
			throw std::runtime_error("Division by 0");
		result = (num1 / num2);
	}
	if (result > 2147483647)
		throw std::runtime_error("Result is too big");
	stack->push(result);
}

int	main(int argc, char **argv)
{
	std::stack<int> stack;

	if (argc < 4)
	{
		std::cout << "Need at least 3 arguments\n";
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		if (strIsNum(argv[i]))
		{
			stack.push(argv[i][0] - 48);
		}
		else if (strIsSign(argv[i]))
		{
			if (stack.size() < 2)
			{
				std::cout << "Need 2 numbers to make operation\n";
				return (1);
			}
			else
			{
				try {
					makeOperation(argv[i][0], &stack);
				}
				catch (std::exception &e) {
					std::cout << e.what() << std::endl;
					return (1);
				}
			}
		}
		else
		{
			std::cout << "Invalid input: "<< argv[i] << std::endl;
			return (1);
		}
	}
	if (stack.size() != 1)
	{
		std::cout << "Invalid input: too many numbers\n";
		return (1);
	}
	std::cout << "Result: " << stack.top() << std::endl;
	return (0);
}

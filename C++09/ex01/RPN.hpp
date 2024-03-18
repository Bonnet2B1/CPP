#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>

class RPN
{
public:
	RPN();
	RPN(const RPN &src);
	virtual ~RPN();
	RPN &operator = (const RPN &rhs);

	bool		calculateRPN(int argc, char **argv);

private:
	bool		strIsNum(std::string str);
	bool		strIsSign(std::string str);
	void		makeOperation(char sign, std::stack<int> *stack);

};

#endif // RPN_HPP

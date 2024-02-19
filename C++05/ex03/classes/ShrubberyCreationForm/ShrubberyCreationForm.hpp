/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:56 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 17:29:57 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "../AForm/AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};

#endif // SHRUBBERYCREATIONFORM_HPP

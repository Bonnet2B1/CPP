/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:44 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 17:29:45 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "../AForm/AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator = (const PresidentialPardonForm &rhs);

	void	execute(Bureaucrat const & executor) const;


private:
};

#endif // PRESIDENTIALPARDONFORM_HPP

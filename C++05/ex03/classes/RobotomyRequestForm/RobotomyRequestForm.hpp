/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:49 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 19:17:47 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "../AForm/AForm.hpp"
# include "time.h"
# include "stdlib.h"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator = (const RobotomyRequestForm &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};

#endif // ROBOTOMYREQUESTFORM_HPP

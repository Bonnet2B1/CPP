/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:37 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 17:29:38 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../AForm/AForm.hpp"

class Bureaucrat;
class AForm;

class Intern {

public:
	Intern();
	Intern(const Intern &src);
	virtual ~Intern();
	Intern &operator = (const Intern &rhs);

	AForm	*makeForm(std::string formName, std::string target);

};

#endif // INTERN_HPP

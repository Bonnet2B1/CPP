/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:33:01 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/22 19:13:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
# define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
# define WARNING_MSG "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"
# define ERROR_MSG "This is unacceptable! I want to speak to the manager now.\n"

class Harl
{
public:
	Harl() {}
	~Harl() {}
	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif

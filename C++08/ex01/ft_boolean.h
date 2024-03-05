/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:07:26 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/05 21:07:27 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

# define EVEN_MSG (char*)"I have an even number of arguments.\n"
# define ODD_MSG (char*)"I have an odd number of arguments.\n"

# define EVEN(nbr) ((nbr) % 2 == 0)

typedef bool	t_bool;

#endif // FT_BOOLEAN_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 04:19:24 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/14 08:12:39 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef SERIALIZATION_H
# define SERIALIZATION_H

struct	Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void*	serialize( void );
Data*	deserialize(void* raw);

#endif
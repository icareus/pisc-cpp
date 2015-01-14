/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longuyen <longuyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:26:07 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 11:26:10 by longuyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mob.Class.hpp"

Mob::Mob( void ) : Unit(50, 1, 1, 1, 1, 1, 1, "Mob", 'Y')
{

}

Mob::Mob(int x) : Unit()
{
	this->_posX = x;
	this->_type = "Mob";
	this->_skin = 'Y';
}

Mob::Mob( Mob const &) : Unit()
{
	this->_type = "Mob";
	this->_skin = 'Y';
}

Mob::~Mob( void )
{
}

Mob &		Mob::operator = (Mob const & obj)
{
	return *this = obj;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:37:10 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 18:28:05 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.Class.hpp"

Bullet::Bullet( void )
{
}

Bullet::Bullet(int x, int y) : Unit(x, y, 1, 1, 1, 1, 1, "Bullet", '\'')
{
}

Bullet::Bullet( Bullet const &) : Unit()
{
	this->_type = "Bullet";
	this->_skin = '\'';
}

Bullet::~Bullet( void )
{
}

Bullet &		Bullet::operator = (Bullet const & obj)
{
	return *this = obj;
}



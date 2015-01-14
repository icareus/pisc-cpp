/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longuyen <longuyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:24:48 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 11:24:53 by longuyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.Class.hpp"

Player::Player( void ) : Unit(50, 48, 1, 1, 1, 1, 1, "Player", '^')
{

}

Player::Player( Player const &) : Unit()
{
	this->_type = "Player";
	this->_skin = '^';
}

Player::~Player( void )
{
}

Player &		Player::operator = (Player const & obj)
{
	return *this = obj;
}


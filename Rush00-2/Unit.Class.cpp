/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:32:21 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 11:25:33 by longuyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unit.Class.hpp"


//////////////////////////////////////////
//				OPERATOR				//
//////////////////////////////////////////

Unit &		Unit::operator=(Unit const &rhs)
{
	if (this != & rhs)
	{
		this->_posX = rhs._posX;
		this->_posY = rhs._posY;
		this->_sizeX = rhs._sizeX;
		this->_sizeY = rhs._sizeY;
		this->_speed = rhs._speed;
		this->_life = rhs._life;
		this->_damage = rhs._damage;
		this->_type = rhs._type;
		this->_skin = rhs._skin;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Unit & u)
{
	o <<	"Position X	: " << u.getPosX() << std::endl <<
			"Position Y	: " << u.getPosY() << std::endl <<
			"Size X		: " << u.getSizeX() << std::endl <<
			"Size Y		: " << u.getSizeY() << std::endl <<
			"Speed		: " << u.getSpeed() << std::endl <<
			"Life		: " << u.getLife() << std::endl <<
			"Damage		: " << u.getDamage() << std::endl <<
			"Type		: " << u.getType() << std::endl <<
			"Skin		: " << u.getSkin();

	return (o);
}

//////////////////////////////////////////
//				CONSTRUCTOR				//
//////////////////////////////////////////

Unit::Unit()
{
	this->_posX = 0;
	this->_posY = 0;
	this->_sizeX = 1;
	this->_sizeY = 1;
	this->_speed = 1;
	this->_life = 1;
	this->_damage = 1;
	this->_type = "Unit";
	this->_skin = 'U';
	// std::cout << "Unit constructed" << std::endl;
	// std::cout << *this << std::endl;
}

Unit::Unit(int X, int Y, int sizeX, int sizeY,
	int speed, int life, int damage, std::string type, char skin) {
	this->_posX = X;
	this->_posY = Y;
	this->_sizeX = sizeX;
	this->_sizeY = sizeY;
	this->_speed = speed;
	this->_life = life;
	this->_damage = damage;
	this->_type = type;
	this->_skin = skin;
	// std::cout << "Unit constructed" << std::endl;
	// std::cout << *this << std::endl;
}

Unit::Unit(Unit const & src)
{
	*this = src;
	// std::cout << "Unit copied" << std::endl;
}

Unit::~Unit()
{
	// std::cout << "Unit destructed" << std::endl;
}

//////////////////////////////////////////
//				GETTER					//
//////////////////////////////////////////

int				Unit::getPosX(void)
{
	return this->_posX;
}

int				Unit::getPosY(void)
{
	return this->_posY;
}

int				Unit::getSizeX(void)
{
	return this->_sizeX;
}

int				Unit::getSizeY(void)
{
	return this->_sizeY;
}

int				Unit::getSpeed(void)
{
	return this->_speed;
}

int				Unit::getLife(void)
{
	return this->_life;
}

int				Unit::getDamage(void)
{
	return this->_damage;
}

std::string		Unit::getType(void)
{
	return this->_type;
}

char			Unit::getSkin(void)
{
	return this->_skin;
}


//////////////////////////////////////////
//			MEMBER FUNCTIONS			//
//////////////////////////////////////////

void			Unit::move(int x, int y)
{
	this->_posX = x;
	this->_posY = y;
}

bool			Unit::collision(Unit & u)
{
	if (this->_posY - u._posY < 2 && this->_posX == u._posX)
		return true;
	else
		return false;
}

bool			Unit::collision(int x, int y) {
	if (this->_posX == x && this->_posY == y)
		return TRUE;
	return FALSE;
}

void			Unit::display(void)
{
	mvaddch(this->_posY, this->_posX, this->_skin);
}




















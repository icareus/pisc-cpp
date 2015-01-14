/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:32:09 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 18:32:21 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP

#include <string>
#include <iostream>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>

class Unit
{
public:

	Unit();
	Unit(int X, int Y,
		int sizeX, int sizeY,
		int speed, int life, int damage,
		std::string type, char skin);
	Unit(Unit const & src);
	~Unit();

	Unit &		operator=(Unit const & rhs);

	int				getPosX(void);
	int				getPosY(void);
	int				getSizeX(void);
	int				getSizeY(void);
	int				getSpeed(void);
	int				getLife(void);
	int				getDamage(void);
	std::string		getType(void);
	char			getSkin(void);

	virtual void			move(int x, int y) = 0;
	virtual bool			collision(Unit & u) = 0;
	virtual bool			collision(int x, int y) = 0;
	virtual void			update(void) = 0;
	virtual void			display(void) = 0;

protected:

	int				_posX;
	int				_posY;
	int				_sizeX;
	int				_sizeY;
	int				_speed;
	int				_life;
	int				_damage;
	std::string		_type;
	char			_skin;
};

std::ostream &		operator<<(std::ostream & o, Unit & u);

#endif

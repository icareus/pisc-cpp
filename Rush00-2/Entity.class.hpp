/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameEntity.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 19:05:18 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/11 20:00:48 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_HPP
# define ENTITY_CLASS_HPP

#include <string>
#include <iostream>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>

class Entity
{
public:

	Entity();
	Entity(int X, int Y,
		int speed, char skin);
	Entity(Entity const & src);
	~Entity();

	Entity &		operator=(Entity const & rhs);

	int				getPosX(void);
	int				getPosY(void);
	int				getSpeed(void);
	char			getSkin(void);

	virtual void			move() = 0;
	virtual bool			collide(Entity & u) = 0;
	virtual bool			collide(int x, int y) = 0;
	virtual void			getInput(void) = 0;
	virtual void			update(void) = 0;
	virtual void			display(void) = 0;

protected:

	int				_posX;
	int				_posY;
	int				_speed;
	char			_skin;
};

std::ostream &		operator<<(std::ostream & o, Entity & u);

#endif

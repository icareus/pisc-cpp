/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:23:35 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 19:13:27 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEMANAGER_CLASS_H
# define GAMEMANAGER_CLASS_H

#include <ncurses.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <sys/time.h>
#include "gameEntity.Class.hpp"
#include "Player.Class.hpp"
#include "Mob.Class.hpp"
#include "Bullet.Class.hpp"


class GameManager
{
	public:
		GameManager( void );
		GameManager( GameManager const & obj );
		GameManager( int W, int H );
		~GameManager( void );

		GameManager &		operator = ( GameManager const & obj );

		void		init( void );
		void		getInput();
		void		update( void );
		void		display( void );

		int			getMapW( void );
		int			getMapH( void );
		bool		over();
		int			quitProgram(void);

	private:
		int			_mapW;
		int			_mapH;
		bool		_over;
		struct		winsize w;			//ncurses
		int			_maxPlayers;
		int			_maxMobs;
		int			_maxEntities;
		Entity		**_entities;

		void		checkTermSize( void );
		int			initCurses(void);
};

std::ostream &		operator<<(std::ostream &, GameManager &);

# endif // GAMEMANAGER_CLASS_H //

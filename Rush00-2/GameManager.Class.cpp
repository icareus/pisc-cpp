/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameManager.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:23:04 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 19:02:05 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameManager.Class.hpp"

// constructors destructors

GameManager::GameManager( void ) : _mapW(100), _mapH(50), _over(TRUE)
{
	// TODO : Set timestamp (see display)
	// GameManager::timestamp = time();
}

GameManager::GameManager( GameManager const & obj )
{
	this->_mapH = obj._mapH;
	this->_mapW = obj._mapH;
	this->_over = obj._over;
}

GameManager::GameManager( int W, int H ) : _mapW(W), _mapH(H), _over(TRUE)
{
}

GameManager::~GameManager( void )
{
}

// Core methods

void		GameManager::init( void )
{
	initCurses();
	this->_over = FALSE;

	this->_maxEntities = 128;
	this->_entities = new gameEntity*[_maxEntities];
	for (int i = 0; i < _maxEntities; i++) {
		if (i < _maxPlayers) {
			_entities[i] = new Player;
		} else if (i < _maxMobs) {
			_entities[i] = new Mob;
		}
	}
}

void		GameManager::getInput( void ) {
	int		input = getch();

	if (input == 'n' && !_entities[0]) {
		this->_entities[0] = new Player;
	}

	for (int mob = 1; mob <= 4; mob++) {
		if (!this->_entities[mob]) {
			int		i;

			srand(clock());
			i = rand() % (_mapW - 1) + 1;

			this->_entities[mob] = new Mob(i);
		}
	}

	if (input == 'q')
	{
		for (int i = 0; i < _entities.size(); i++) {
			if (_entities[i]) {
				delete _entities[i];
				_entities[i] = NULL;
			}
		}
		this->_over = TRUE;
	}

	_entities[0].getInput();
	// if (input == 'a' && _entities[0])
	// {
	// 	if (_entities[0]->getPosX() - _entities[0]->getSpeed() > 0)
	// 		_entities[0]->move(_entities[0]->getPosX() - _entities[0]->getSpeed(), _entities[0]->getPosY());
	// 	else
	// 		_entities[0]->move(1, _entities[0]->getPosY());
	// }
	// if (input == 'd' && _entities[0])
	// {
	// 	if (_entities[0]->getPosX() + _entities[0]->getSpeed() < this->_mapW)
	// 		_entities[0]->move(_entities[0]->getPosX() + _entities[0]->getSpeed(), _entities[0]->getPosY());
	// 	else
	// 		_entities[0]->move(this->_mapW - 1, _entities[0]->getPosY());
	// }   
	// if (input == ' ' && _entities[0])
	// {
	// 	this->_bullet = new Bullet(_entities[0]->getPosX(), _entities[0]->getPosY());
	// }
	// if (_bullet)
	// {
	// 	_bullet->move(_bullet->getPosX(), _bullet->getPosY() - _bullet->getSpeed());
	// }
	// if (_entities[1]) {
	// 	_entities[1]->move(_entities[1]->getPosX(), _entities[1]->getPosY() + _entities[1]->getSpeed());
	// }
	
	// // foreach (units[]) {unit.update;}
	// if (_entities[1] && _entities[1]->getPosY() >= _mapH) {
	// 	delete this->_entities[1];
	// 	this->_entities[1] = NULL;
	// }
	// if (_entities[1] && _bullet && _bullet->collision(*_entities[1]))
	// {
	// 	delete this->_entities[1];
	// 	this->_entities[1] = NULL;
	// 	delete this->_bullet;
	// 	this->_bullet = NULL;
	// }
	// if (_entities[1] && _entities[0] && _entities[0]->collision(*_entities[1]))
	// {
	// 	delete this->_entities[1];
	// 	this->_entities[1] = NULL;
	// 	delete this->_entities[0];
	// 	this->_entities[0] = NULL;
	// }
}

void		GameManager::display( void )
{
		this->checkTermSize();
		for (int x = 0 ; x <= this->_mapW; x++)
    	{
        	for (int y = 0; y <= this->_mapH; y++)
                if (x == 0 || x == this->_mapW || y == 0 || y == this->_mapH)
                    mvaddch(y, x, '#');
    	}
		if (this->_entities[0])
		{
			this->_entities[0]->display();
		}
		if (this->_entities[1])
		{
			this->_entities[1]->display();
		}
		if (this->_bullet) 
		{
			this->_bullet->display();
		}

        refresh();
}

void		GameManager::checkTermSize()
{

    refresh();
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &(this->w));
	while ((this->w).ws_row < this->_mapH || this->w.ws_col < this->_mapW)
    {
    	clear();
    	addstr("Please, increase your term window's size");
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &(this->w));
        sleep(100);
        refresh();
    }
    clear();
	move(0, 0);
}

int 		GameManager::initCurses(void)
{
	initscr();
	keypad(stdscr,TRUE);
	if (!has_colors() || start_color() != OK)
	{
		addstr("Your terminal is unable to manage color. Press any key to quit.");
		refresh();
		getch();
		endwin();
		return (-1);
	}
	curs_set(0);
	timeout(0);
	cbreak();
	noecho();
	// init_pair(1,COLOR_RED,COLOR_GREEN);
	// bkgd(COLOR_PAIR(1));
	return (0);
}

bool		GameManager::over() {
	return this->_over;
}

int 		GameManager::quitProgram(void)
{
	addstr("\nPress any key to quit.");
	refresh();
	getch();
	endwin();
	return (0);
}

// operator overload

GameManager &		GameManager::operator = ( GameManager const & obj )
{
	this->_mapH = obj._mapH;
	this->_mapW = obj._mapH;
	return *this;
}


std::ostream &		operator<<(std::ostream & o, GameManager & obj)
{
	o 	<< "<GameManager> - Map[" << obj.getMapW() << "*" << obj.getMapH() << "]"
		<< std::endl;
	return o;
}

// getter setters

int			GameManager::getMapW( void ) { return this->_mapW; }
int			GameManager::getMapH( void ) { return this->_mapH; }

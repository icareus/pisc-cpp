/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:52:55 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 21:21:05 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int _size) {
	this->_size = _size;
	this->_horde = new Zombie*[_size];
	for (int z = 0; z < _size; z++) {
		_horde[z] = new Zombie("Heapie Zombie");
	}
}

ZombieHorde::~ZombieHorde() {
	for (int z = 0; z < this->_size; z++) {
		delete this->_horde[z];
	}
	delete this->_horde;
}

void ZombieHorde::announce() const {
	std::cout << std::endl<< "The Horde Rages !" << std::endl << std::endl;
	for (int z=0; z < this->_size; z++) {
		this->_horde[z]->announce();
	}
	std::cout << std::endl;
}
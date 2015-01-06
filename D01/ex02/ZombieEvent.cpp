/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:56:24 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 20:29:41 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->_type = "Unknown Type";
}

ZombieEvent::~ZombieEvent() {
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	Zombie*		freshZombie;

	freshZombie = new Zombie(this->_type);
	freshZombie->setName(name);
	return (freshZombie);
}
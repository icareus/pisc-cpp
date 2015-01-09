/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:38:52 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/09 07:20:47 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>
#include <cstring>
#include <iostream>

ScavTrap::ScavTrap(void) {
	this->_life = 100;
	this->_maxlife = 100;
	this->_energy = 50;
	this->_maxenergy = 50;
	this->_level = 1;
	this->_name = "SC4V-TP";
	this->_melee = 20;
	this->_ranged = 15;
	this->_defense = 3;
	this->_alive = true;
	std::cout << "ScavTrap <" << this->_name << "> created." << std::endl;
}

ScavTrap::ScavTrap(std::string _name) {
	this->_life = 100;
	this->_maxlife = 100;
	this->_energy = 50;
	this->_maxenergy = 50;
	this->_level = 1;
	this->_name = _name;
	this->_melee = 20;
	this->_ranged = 15;
	this->_defense = 3;
	this->_alive = true;
	std::cout << "ScavTrap <" << this->_name << "> created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) {
	this->_life = src._life;
	this->_maxlife = src._maxlife;
	this->_energy = src._energy;
	this->_maxenergy = src._maxenergy;
	this->_level = src._level;
	this->_name = src._name;
	this->_melee = src._melee;
	this->_ranged = src._ranged;
	this->_defense = src._defense;
	this->_alive = src._alive;
	std::cout << "ScavTrap <" << this->_name << "> copied." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << ": I'm outta here !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & assig) {
	this->_life = assig._life;
	this->_maxlife = assig._maxlife;
	this->_energy = assig._energy;
	this->_maxenergy = assig._maxenergy;
	this->_level = assig._level;
	this->_name = assig._name;
	this->_melee = assig._melee;
	this->_ranged = assig._ranged;
	this->_defense = assig._defense;
	this->_alive = assig._alive;

	return *this;
}

int ScavTrap::rangedAttack(std::string const & target) {
	if (!this->_alive)
		return 0;
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> at range, for <" << this->_ranged << "> raw damage points." << std::endl;
	return this->_ranged;
}

int ScavTrap::meleeAttack(std::string const & target) {
	if (!this->_alive)
		return 0;
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> in melee, for <" << this->_melee << "> raw damage points." << std::endl;
	return this->_melee;
}

int ScavTrap::takeDamage(unsigned int amount) {
	if (!this->_alive) {
		std::cout << "<" << this->_name << "> is already KO.";
		return (0);
	}
	int		newLife = (int)this->_life - (int)(amount - this->_defense);

	std::cout << "FR4G-TP <" << this->_name
		<< "> takes <" << amount << " - " << this->_defense << "> damage." << std::endl;
	if (newLife > 0) {
		this->_life = newLife;
		std::cout << "Remaining life : <" << this->_life << ">" << std::endl;
	} else if (newLife < 0) {
		this->_life = 0;
		std::cout << "Overkill <" << -newLife << "> !" << std::endl;
		this->_alive = false;
	} else if (newLife == 0) {
		this->_life = 0;
		std::cout << this->_name << " is KO." << std::endl;
		this->_alive = false;
	}
	return (this->_life);
}

int ScavTrap::beRepaired(unsigned int amount) {
	if (!this->_alive) {
		std::cout << "It's too late for <" << this->_name << "> already." << std::endl;
		return (0);
	}
	int		newLife = this->_life + amount;

	std::cout << "FR4G-TP <" << this->_name
		<< "> is healed for <" << amount << ">" << std::endl;
	if ((unsigned int)newLife < this->_maxlife) {
		this->_life = newLife;
		std::cout << "New life : <" << this->_life << ">" << std::endl;
	} else if ((unsigned int)newLife > this->_maxlife) {
		this->_life = this->_maxlife;
		std::cout << "OverHeal <" << newLife - this->_maxlife << ">" << std::endl;
	}
	return (this->_life);
}

void ScavTrap::challengeNewcomer() {
	int dice1 = rand() % 4;
	int dice2 = rand() % 4 + 4;
	if (!this->_alive) {
		return ;
	}
	std::string set[8] = {
		"zoom", "scratch", "shoo", "lickScav"
		"HUD", "purge exhaust", "constructor", "weapon"
	};
	std::cout << "Newcomer ! I challenge you to "
		<< set[dice1] << (rand() % 2 ? " my " : "your ")
		<< set[dice2] << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:38:52 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/09 06:51:39 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>
#include <iostream>

FragTrap::FragTrap(void) {
	this->_life = 100;
	this->_maxlife = 100;
	this->_energy = 100;
	this->_maxenergy = 100;
	this->_level = 1;
	this->_name = "FR4G-TP";
	this->_melee = 30;
	this->_ranged = 20;
	this->_defense = 5;
	this->_alive = true;
	std::cout << "FragTrap <" << this->_name << "> created." << std::endl;
}

FragTrap::FragTrap(std::string _name) {
	this->_life = 100;
	this->_maxlife = 100;
	this->_energy = 100;
	this->_maxenergy = 100;
	this->_level = 1;
	this->_name = _name;
	this->_melee = 30;
	this->_ranged = 20;
	this->_defense = 5;
	this->_alive = true;
	std::cout << "FragTrap <" << this->_name << "> created." << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) {
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
	std::cout << "FragTrap <" << this->_name << "> copied." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << ": Emergency deconstruction !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & assig) {
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

int FragTrap::rangedAttack(std::string const & target) {
	if (!this->_alive)
		return 0;
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> at range, for <" << this->_ranged << "> raw damage points." << std::endl;
	return this->_ranged;
}

int FragTrap::meleeAttack(std::string const & target) {
	if (!this->_alive)
		return 0;
	std::cout << "FR4G-TP <" << this->_name
		<< "> attacks <" << target
		<< "> in melee, for <" << this->_melee << "> raw damage points." << std::endl;
	return this->_melee;
}

int FragTrap::takeDamage(unsigned int amount) {
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

int FragTrap::beRepaired(unsigned int amount) {
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

int	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (!this->_alive || this->_energy < 25) {
		std::cout << "<" << this->_name << "> is out of energy." << std::endl;
		return 0;
	}
	int dice = rand() % 6 + 1;
	std::string set[] = {"Vidange", "Biffle", "Lance-Flemme", "Ennui Mortel", "Randomisation"};
	int damage = rand() % 25 + 17;

	std::cout << "Special delivery for <" << target << "> : <" << this->_name << "> cast " << set[dice] << " for <"
		<< damage << "> damage !" << std::endl;
	this->_energy -= 25;
	return (damage);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:56:01 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 19:38:22 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string _type) {
	int		dice = rand() % 6;

	this->_type = _type;
	switch (dice) {
		case 0 : this->_name = "John RANDo";
		break;
		case 1 : this->_name = "BRANDon Marlo";
		break;
		case 2 : this->_name = "James BRAND";
		break;
		case 3 : this->_name = "Paul RAND";
		break;
		case 4 : this->_name = "BRANDy";
		break;
		case 5 : this->_name = "YARZN";
		break;
	}
}

Zombie::~Zombie() {
	if (!this->_type.compare("Heapie Zombie"))
		delete this;
}

void Zombie::announce(void) {
	int						dice = rand() % 6;
	std::stringstream		out;

	std::cout.width(80);
	out << "<" << this->_name << " (" << this->_type << ")>";
	std::cout << std::left << out.str();
	switch (dice) {
		case 0 : out.str("<<Muffled groaning>>");
		break;
		case 1 : out.str("...Feed... Me...");
		break;
		case 2 : out.str("So... Empty...");
		break;
		case 3 : out.str("..........Braiiiiiins...");
		break;
		case 4 : out.str("...Gingers....Won't....Do...");
		break;
		case 5 : out.str("**LOUD SHRIEKING**");
		break;
	}
	std::cout << std::right << out.str() << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	randomChump(void) {
	Zombie		randomZombie("Stacky Zombie");

	randomZombie.announce();
}

int		main(void) {
	std::string 	input;
	int				timeToDie = rand() % 10 + 3;
	Zombie			*surrounding[timeToDie];
	ZombieEvent		spawner;

	spawner.setZombieType("Heapie Zombie");
	for (int i = 0; i < timeToDie; i++) {
		std::cout << i << " Zombie(s) lurking around." << std::endl;
		std::cout << "Enter new zombie name : ";
		getline(std::cin, input);
		surrounding[i] = spawner.newZombie(input);
		for (int j=0; j <= i; j++) {
			surrounding[j]->announce();
		}
		for (int z = 0; z < rand() % 5 - 1; z++)
			randomChump();
	}
	std::cout << std::endl << "Surrounded by zombies, you end up devoured." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:56:01 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 20:44:11 by abarbaro         ###   ########.fr       */
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
	std::cout << this->_name << " crumbles into the ground." << std::endl;
}

void Zombie::announce(void) const {
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

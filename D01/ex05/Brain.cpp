/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 22:24:54 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 23:40:51 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

Brain::Brain() {
	std::stringstream	id;

	id << this;
	this->_entity = id.str();
	for (size_t i = 2; i < this->_entity.length(); i++) {
		this->_entity[i] = toupper(this->_entity[i]);
	}
}

Brain::~Brain() {
}

std::string		Brain::identify() const {
	return (this->_entity);
}
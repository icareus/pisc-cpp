/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 22:25:11 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 23:10:39 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
}

Human::~Human() {
}

std::string		Human::identify() const {
	return (this->_brain.identify());
}

Brain			Human::getBrain() const {
	return (this->_brain);
}
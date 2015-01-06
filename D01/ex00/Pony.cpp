/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 09:48:51 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 10:30:13 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

pony::pony(void) {
	std::cout << "input pony name : ";
	getline(std::cin, this->name);
}

pony::~pony(void) {
}

void	pony::declare(std::string sentence) {
	std::cout << this->name << " declares : " << sentence << std::endl;
}
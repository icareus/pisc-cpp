/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:41:15 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 21:20:46 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <iostream>

void	randomChump(void) {
	Zombie		randomZombie("Stacky Zombie");

	randomZombie.announce();
}

int		main(void) {
	std::string 	input;
	int				timeToDie = rand() % 10 + 3;
	Zombie			*surrounding[timeToDie];
	ZombieHorde		Horde(rand() % 8 + 1);

	for (int i = 0; i < timeToDie; i++) {
		std::cout << i << " lone Zombie(s) lurking around." << std::endl;
		surrounding[i] = new Zombie("Heapie Zombie");
		for (int j=0; j <= i; j++) {
			surrounding[j]->announce();
		}
		if (rand() % 3) {
			Horde.announce();
		}
	}
	std::cout << std::endl << "Surrounded by zombies, you end up devoured." << std::endl << std::endl;
	for (int k = 0; k < timeToDie; k++)
		delete surrounding[k];
}
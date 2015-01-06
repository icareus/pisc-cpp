/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:41:15 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 20:45:11 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
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
	std::cout << std::endl << "Surrounded by zombies, you end up devoured." << std::endl << std::endl;
	for (int k = 0; k < timeToDie; k++)
		delete surrounding[k];
}
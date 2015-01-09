/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:39:20 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/09 07:20:50 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

int		main() {
	FragTrap	test("toto");
	FragTrap	test2("ubu");
	ScavTrap	test3("Zleug");

	while (test2.takeDamage(test.rangedAttack("ubu"))) {
		test.takeDamage(test3.meleeAttack("toto"));
		test.beRepaired(42);
		if (rand() % 2)
			test.takeDamage(test2.vaulthunter_dot_exe("toto"));
		if (rand() % 2)
			test3.challengeNewcomer();
	} ;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:23:29 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/11 02:35:04 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameManager.Class.hpp"
// #include "Unit.Class.hpp"
// #include <sys/time.h>

int		main(void) {
	struct timeval		tmp;
	gettimeofday(&tmp, NULL);

	long long int		newframe, curframe = (tmp.tv_sec * 1000000 + tmp.tv_usec);
	GameManager			testRushGame;

	testRushGame.init();
	while (!testRushGame.over()) {
		gettimeofday(&tmp, NULL);
		curframe = (tmp.tv_sec * 1000000 + tmp.tv_usec);
		if (curframe - newframe > 20000) {
			newframe = curframe;
			testRushGame.update();
			testRushGame.display();
		}
	}
	testRushGame.quitProgram();
	std::cout << "GAME OVER" << std::endl;

	// Unit u1(18, 5, //X, Y
	// 	1, 1, // sizeX, sizeY
	// 	1, 1, // speed, life
	// 	1, "Player", // damage, type
	// 	'^'); // skin
	// Unit u2(u1);
	// Unit u3;

	// u3 = u1;
	// std::cout << "U1 :" << u1 << std::endl;
	// std::cout << "U2 :" << u2 << std::endl;
	// std::cout << "U3 :" << u3 << std::endl;

	return (0);
}



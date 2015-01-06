/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/05 21:33:55 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int		main(const int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac > 1)
		for (int i = 1; i < ac; i++) {
			for (size_t j = 0; j < std::strlen(av[i]); j++)
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << std::endl;
	return (0);
}
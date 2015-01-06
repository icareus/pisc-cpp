/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 09:48:51 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 10:30:10 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	pony	*newPony;

	newPony = new pony;
	if (std::cin.eof()) {
		delete newPony;
		exit(0);
	}
	newPony->declare("I'm peacefully grazing on the heap.");
	delete newPony;
}

void	ponyOnTheStack(void) {
	pony	newPony;

	if (std::cin.eof())
		exit(0);
	newPony.declare("I'm galloping on the stack !");
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 04:18:41 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/14 08:12:40 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "serialization.hpp"
#include <new>

int		main(/*int ac, char **av*/) {
	void *	raw;
	Data *	data;

	srand(time(NULL));
	try {
		raw = serialize();
	} catch(std::bad_alloc & ba) {
		std::cerr << "Serialization error : " << ba.what() << std::endl;
		std::exit(0);
	}
	try {
		data = deserialize(raw);
	} catch(std::bad_alloc &ba) {
		std::cerr << "Deserialization error: " << ba.what() << std::endl;
		std::exit(0);
	}
	std::cout << "Raw as char[20]: " << reinterpret_cast<char *>(raw) << std::endl
		<< "data->s1: " << data->s1 << std::endl
		<< "data->s2: " << data->s2 << std::endl
		<< "data->n: " << data->n << std::endl;
	return (0);
}
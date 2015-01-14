/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 04:19:39 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/14 08:21:27 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"serialization.hpp"
#include	<cstdlib>

char	randAlnum() {
		switch (rand() % 3) {
			case 0 :
				return static_cast<char>(rand() % 26 + 'a');
			case 1 :
				return static_cast<char>(rand() % 26 + 'A');
			default:
				return static_cast<char>(rand() % 9 + '0');
		}
}

void*	serialize( void ) {
	char	*raw = new char[21];

	for (int i = 0; i < 20; i++) {
		raw[i] = randAlnum();
	}
	raw[20] = '\0';
	return static_cast<void *>(raw);
}

Data*	deserialize(void * raw) {
	Data	*data = new Data;
	char	*cRaw = reinterpret_cast<char *>(raw);
	int		*randInt = reinterpret_cast<int *>(static_cast<char *>(raw) + 8);

	data->s1.resize(8);
	data->s2.resize(8);
	for (int i = 0; i < 8; i++) {
		data->s1[i] = cRaw[i];
		data->s2[i] = cRaw[i + 12];
	}
	data->n = *randInt;
	return data;
}
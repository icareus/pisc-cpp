/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 09:23:19 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.class.hpp>
#include <iostream>

int		main(void) {
	std::string		buff;
	Entry			page[8];
	int				added = 0;

	while (1) {
		std::getline(std::cin, buff);
		if (!buff.compare("ADD"))
			if (added < 8) {
				page[added].fill(added);
				added ++;
			}
			else
				std::cout << "Sorry, the book is full." << std::endl;
		else if (!buff.compare("SEARCH")) {
			std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
			for (int i = 0; i < added; i++)
				page[i].display();
		}
		else if (!buff.compare("EXIT") || std::cin.eof())
			return (0);
	}
	return (0);
}
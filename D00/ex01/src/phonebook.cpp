/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 18:47:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 08:48:23 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.class.hpp>
#include <sstream>

void	show_search(Entry *page, int entriesNum) {
	std::stringstream	format;

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < entriesNum; i++) {
		format.width(10);
		format << std::right << page[i].index;
		std::cout << format.str() << "|";
		format.str("");
		format.width(10);
		format << std::right << page[i].firstName.substr(0, 10);
		std::cout << format.str() << "|";
		format.str("");
		format.width(10);
		format << std::right << page[i].lastName.substr(0, 10);
		std::cout << format.str() << "|";
		format.str("");
		format.width(10);
		format << std::right << page[i].nickname.substr(0, 10);
		std::cout << format.str() << "|" << std::endl;
		format.str("");
	}
	(void)page;
}

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
		else if (!buff.compare("SEARCH"))
			show_search(page, added);
		else if (!buff.compare("EXIT"))
			return (0);
	}
	return (0);
}
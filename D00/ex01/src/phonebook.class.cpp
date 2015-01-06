/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 22:34:52 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 09:23:18 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <phonebook.class.hpp>
#include <sstream>

Entry::Entry(void) {

}

Entry::~Entry(void) {

}

// Sometimes when I read code like this, I consider investing in jetpacks.
void	Entry::fill(int index) {
	this->index = index;
	std::cout << "First Name : ";
	std::getline(std::cin, this->firstName);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Last Name : ");
	std::getline(std::cin, this->lastName);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Nickname : ");
	std::getline(std::cin, this->nickname);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Postal Address : ");
	std::getline(std::cin, this->postalAddress);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Email Address : ");
	std::getline(std::cin, this->emailAddress);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Phone Number : ");
	std::getline(std::cin, this->phoneNumber);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Birthday Date : ");
	std::getline(std::cin, this->birthdayDate);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Favorite Meal : ");
	std::getline(std::cin, this->favoriteMeal);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Underwear Color : ");
	std::getline(std::cin, this->underwearColor);
	if (std::cin.eof())
		exit (0);
	else
		(std::cout << "Darkest Secret : ");
	std::getline(std::cin, this->darkestSecret);
	if (std::cin.eof())
		exit (0);
}

// Nothing to do here.
void Entry::display(void) {
	std::stringstream	format;

	format.width(10);
	format << std::right << this->index;
	std::cout << format.str() << "|";
	format.str("");
	format.width(10);
	format << std::right << this->firstName.substr(0, 10);
	std::cout << format.str() << "|";
	format.str("");
	format.width(10);
	format << std::right << this->lastName.substr(0, 10);
	std::cout << format.str() << "|";
	format.str("");
	format.width(10);
	format << std::right << this->nickname.substr(0, 10);
	std::cout << format.str() << "|" << std::endl;
	format.str("");
}
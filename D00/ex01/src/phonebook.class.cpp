/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 22:34:52 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 00:21:12 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.class.hpp>

Entry::Entry(void) {

}

Entry::~Entry(void) {

}

void	Entry::fill(int index) {
	this->index = index;
	std::cout << "First Name : ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last Name : ";
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Postal Address : ";
	std::getline(std::cin, this->postalAddress);
	std::cout << "Email Address : ";
	std::getline(std::cin, this->emailAddress);
	std::cout << "Phone Number : ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Birthday Date : ";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "Favorite Meal : ";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "Underwear Color : ";
	std::getline(std::cin, this->underwearColor);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, this->darkestSecret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 22:28:09 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 09:23:21 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>

class Entry {

public:
	Entry();
	~Entry();
	void fill(int index);
	void display(void);

	int				index;
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		postalAddress;
	std::string		emailAddress;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favoriteMeal;
	std::string		underwearColor;
	std::string		darkestSecret;
};

#endif
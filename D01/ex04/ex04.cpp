/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 21:52:35 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 21:59:21 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void) {
	std::string		out = "HI THIS IS BRAIN";
	std::string&	outRef = out;
	std::string*	outPtr = &out;
	std::cout << *outPtr << std::endl;
	std::cout << outRef << std::endl;
	return (0);
}
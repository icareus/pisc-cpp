/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:56:41 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 19:29:31 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# ifndef ZOMBIE_HPP
#  include "Zombie.hpp"
# endif

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void 		setZombieType(std::string type);
	Zombie*		newZombie(std::string name);
private:
	std::string			_type;
};

#endif

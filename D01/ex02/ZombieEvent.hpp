/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:56:41 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 20:44:07 by abarbaro         ###   ########.fr       */
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
	Zombie*		newZombie(std::string name) const;
private:
	std::string			_type;
};

#endif

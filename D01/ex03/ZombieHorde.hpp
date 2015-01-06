/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 20:46:50 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/06 21:23:30 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# ifndef ZOMBIE_HPP
# include "Zombie.hpp"
# endif

class ZombieHorde
{
public:
	ZombieHorde(int _size);
	~ZombieHorde();
	void	announce() const;
private:
	int			_size;
	Zombie**	_horde;	
};

#endif
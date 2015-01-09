/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:39:08 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/09 08:16:18 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

class ScavTrap
{
public:
	ScavTrap(void);								// CanoConstruct
	ScavTrap(std::string _name);				// ConstructOverloadName
	ScavTrap(const ScavTrap & src);				// CanoCopy
	~ScavTrap(void);							// CanoDestruc
	ScavTrap& operator=(const ScavTrap &);		// CanoOverloadAssign

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	int		takeDamage(unsigned int amount);
	int		beRepaired(unsigned int amount);
	void	challengeNewcomer();

private:
	bool				_alive;
	unsigned int		_life;
	unsigned int		_maxlife;
	unsigned int		_energy;
	unsigned int 		_maxenergy;
	unsigned int 		_level;
	std::string			_name;
	unsigned int 		_melee;
	unsigned int 		_ranged;
	unsigned int 		_defense;
};

#endif

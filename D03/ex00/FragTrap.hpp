/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 02:39:08 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/09 05:53:48 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class FragTrap
{
public:
	FragTrap(void);								// CanoConstruct
	FragTrap(std::string _name);			// ConstructOverloadName
	FragTrap(const FragTrap & src);				// CanoCopy
	~FragTrap(void);							// CanoDestruc
	FragTrap& operator=(const FragTrap &);		// CanoOverloadAssign

	int rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	int takeDamage(unsigned int amount);
	int beRepaired(unsigned int amount);
	int	vaulthunter_dot_exe(std::string const & target);

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:25:03 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 19:14:13 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H

#include "Unit.Class.hpp"

class Player : public Entity
{
	public:

		Player( void );
		Player( Player const &);
		~Player( void );

		Player &		operator = (Player const &);
};

#endif 

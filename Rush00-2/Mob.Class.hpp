/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longuyen <longuyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:26:24 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 11:26:32 by longuyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOB_CLASS_H
# define MOB_CLASS_H

#include "Unit.Class.hpp"

class Mob : public Unit
{
	public:

		Mob( void );
		Mob( int );
		Mob( Mob const &);
		~Mob( void );

		Mob &		operator = (Mob const &);

};

#endif

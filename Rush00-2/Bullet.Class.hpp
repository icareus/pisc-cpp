/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longuyen <longuyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 11:37:05 by longuyen          #+#    #+#             */
/*   Updated: 2015/01/11 11:37:06 by longuyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_H
# define BULLET_CLASS_H

#include "Unit.Class.hpp"

class Bullet : public Unit
{
	public:

		Bullet( void );
		Bullet( int x, int y);
		Bullet( Bullet const &);
		~Bullet( void );

		Bullet &		operator = (Bullet const &);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:28:17 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/13 11:53:20 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie();
    
    zombie->setzombiename(name);
    
    return(zombie);
};
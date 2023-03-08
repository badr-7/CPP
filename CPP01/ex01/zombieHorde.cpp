/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:51:31 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/08 08:53:21 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
     Zombie *zombie = new Zombie[N];
    for(int i = 0;i < N;i++){
        zombie[i].setzombiename(name); 
        zombie[i].announce();
    }
    return(zombie);
}
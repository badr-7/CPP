/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:51:31 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 17:47:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie ;
    if (N >= 0)
        zombie = new Zombie[N];
    else
        exit(1);
    for(int i = 0;i < N;i++){
        zombie[i].setzombiename(name); 
        zombie[i].announce();
    }
    return(zombie);
}
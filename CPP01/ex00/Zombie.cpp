/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:47:31 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/08 08:47:31 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie::Zombie(std::string name)
{
    _Name = name;
};

void Zombie::announce( void )
{
        std::cout<< _Name <<" : BraiiiiiiinnnzzzZ..."<<std::endl;
};

Zombie::~Zombie(){
        std::cout<< _Name << " deleted" <<std::endl;
    };

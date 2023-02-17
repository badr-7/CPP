/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:33:29 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/15 15:52:06 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout<< this->Name <<" : BraiiiiiiinnnzzzZ..."<<std::endl;
};

void Zombie::setzombiename(std::string z_name)
{
    this->Name = z_name;
};

Zombie::~Zombie(){
    std::cout<< this->Name <<std::endl;
};
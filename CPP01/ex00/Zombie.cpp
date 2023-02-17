/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:47:31 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/15 15:31:40 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 void Zombie::setzombiename(std::string name)
{
    this->Name = name;
};

void Zombie::announce( void )
{
        std::cout<<Name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
};

Zombie::~Zombie(){
        std::cout<< Name <<std::endl;
    };

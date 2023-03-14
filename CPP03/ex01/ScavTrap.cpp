/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:00:06 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/14 16:07:47 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<< "Default constructor of ScavTrap called"<<std::endl;
    _name = "dfault";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};
ScavTrap::ScavTrap(ScavTrap &other){
    std::cout<< "Copy constructor of ScavTrap called"<<std::endl;
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
};
ScavTrap::ScavTrap(std::string &name){
    std::cout<< "Parameterized constructor of ScavTrap called"<<std::endl;
     _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};
void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap is now in Gate keeper mode"<<std::endl;
};

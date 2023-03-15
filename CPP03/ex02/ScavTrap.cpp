/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:42:31 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 09:29:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<< "ScavTrap Default constructor of called"<<std::endl;
    _name = "dfault";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};
ScavTrap::ScavTrap(ScavTrap &other){
    std::cout<< "ScavTrap Copy constructor of called"<<std::endl;
   *this = other;
};
ScavTrap::ScavTrap(std::string name){
    std::cout<< "ScavTrap Parameterized constructor of called"<<std::endl;
     _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
};
void ScavTrap::guardGate()
{
    std::cout<< "ScavTrap is now in Gate keeper mode"<<std::endl;
};
void ScavTrap::attack(const std::string& target){
    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 1;
        std::cout<<"ScavTrap "<< this->_name<< " attacks " << target <<", causing "<< this->_attackDamage <<" points of damage!"<<std::endl;
    }
};
ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
};
ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap Destructor called"<<std::endl;
};
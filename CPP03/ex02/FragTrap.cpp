/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:43:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 10:09:13 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout<< "FragTrap Default constructor of called"<<std::endl;
    _name = "dfault";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
};
FragTrap::FragTrap(FragTrap &other){
    std::cout<< "FragTrap Copy constructor of called"<<std::endl;
    *this = other;
};
FragTrap::FragTrap(std::string name){
    std::cout<< "FragTrap Parameterized constructor of called"<<std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
};
void FragTrap::highFivesGuys()
{
    std::cout<< "FragTrap high Fives Guys?"<<std::endl;
};
void FragTrap::attack(const std::string& target){
    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 1;
        std::cout<<"FragTrap "<< this->_name<< " attacks " << target <<", causing "<< this->_attackDamage <<" points of damage!"<<std::endl;
    }
};

FragTrap &FragTrap::operator=(const FragTrap &other){
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    
    return *this;
};

FragTrap::~FragTrap(){
    std::cout<<"FragTrap Destructor called"<<std::endl;
};
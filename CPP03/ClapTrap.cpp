/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:57:17 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/14 13:34:30 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout<< "Default constructor called"<<std::endl;
    _name = "dfault";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
};
ClapTrap::~ClapTrap(){
    std::cout<<"Destructor called"<<std::endl;
};
ClapTrap::ClapTrap(ClapTrap &other){
    std::cout<< "Copy constructor called"<<std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
};
ClapTrap::ClapTrap(std::string name){
    std::cout<< "parameterized constructor called"<<std::endl;
    this->_name = name;
     _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
};
void ClapTrap::attack(const std::string& target){
    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 1;
        std::cout<<"ClapTrap "<< this->_name<< " attacks " << target <<", causing "<< this->_attackDamage <<" points of damage!"<<std::endl;
    }
};
void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints >= amount)
    {
        this->_hitPoints -= amount;
        std::cout<<"ClapTrap "<< this->_name<< " take damage of " << amount <<std::endl;

    }
};
void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints > 0)
    {
        this->_hitPoints += amount;
        std::cout<<"ClapTrap "<< this->_name<< " Repaired him self by " << amount <<", of health points "<<std::endl;
    }

};
ClapTrap& ClapTrap::operator=(ClapTrap& other){
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    return *this;
};
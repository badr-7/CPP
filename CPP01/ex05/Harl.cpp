/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:54:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/22 09:10:10 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
};
void Harl::info( void ){
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl; 
};
void Harl::warning( void ){
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl; 
};
void Harl::error( void ){
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl; 
};


void Harl::complain(std::string levle) {
    
}


void    test() {
    
}


// typedef void    (Harl::*func)();

// func    funcp = &Harl::complain;


// funcp()
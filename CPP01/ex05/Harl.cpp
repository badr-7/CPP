/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:54:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/08 14:45:31 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void    (Harl::*func)();

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
    func all_complains[] = {&Harl::debug, &Harl::info,&Harl::warning,&Harl::error};
    std::string args[] = {std::string("DEBUG"),std::string("INFO"),std::string("WARNING"),std::string("ERROR")};
    for(int i = 0; i < 4; i++){
        if(levle == args[i])
            (this->*all_complains[i])();
    }
};
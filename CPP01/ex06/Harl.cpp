/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:54:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/03 13:36:17 by mel-hous         ###   ########.fr       */
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
    int j;
    func all_complains[] = {&Harl::debug, &Harl::info,&Harl::warning,&Harl::error};
    std::string args[] = {std::string("DEBUG"),std::string("INFO"),std::string("WARNING"),std::string("ERROR")};
    for(int i = 0; i < 4; i++){
        if(levle == args[i])
            j = i;
    }
    switch (j)
    {
    case 0:
        std::cout<<"[ DEBUG ]"<<std::endl;
        (this->*all_complains[0])();
        std::cout<<"\n[ INFO ]"<<std::endl;
        (this->*all_complains[1])();
        std::cout<<"\n[ WARNING ]"<<std::endl;
        (this->*all_complains[2])();
        std::cout<<"\n[ ERROR ]"<<std::endl;
        (this->*all_complains[3])();
        break;
    case 1:
        std::cout<<"[ INFO ]"<<std::endl;
        (this->*all_complains[1])();
        std::cout<<"\n[ WARNING ]"<<std::endl;
        (this->*all_complains[2])();
        std::cout<<"\n[ ERROR ]"<<std::endl;
        (this->*all_complains[3])();
        break;
    case 2:
        std::cout<<"[ WARNING ]"<<std::endl;
        (this->*all_complains[2])();
        std::cout<<"\n[ ERROR ]"<<std::endl;
        (this->*all_complains[3])();
        break;
    case 3:
        std::cout<<"[ ERROR ]"<<std::endl;
        (this->*all_complains[3])();
        break;
    
    default:
    std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        break;
    }
};


// void    test() {
    
// }




// func    funcp = &Harl::complain;


// funcp()
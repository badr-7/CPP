/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   badr.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:11:13 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/03 10:56:53 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "badr.hpp"

typedef void (badr::*f_pointer)();
 
badr::badr(void){
    std::cout<< "constructor called"<<std::endl;
};
badr::~badr(void){
    std::cout<< "destructor called"<<std::endl;
};
    
    void badr::func_a(){
    std::cout<< "func_a called"<<std::endl; 
    };
    void badr::func_b(){
    std::cout<< "func_b called"<<std::endl;
    };
    void badr::wich_one(){
        f_pointer fnc[] = {&badr::func_a, &badr::func_b};
        (this->*fnc[0])();
        (this->*fnc[1])();
    }; 
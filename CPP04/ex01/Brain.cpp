/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:56:02 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 14:58:03 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout<< "Brain defautl constructor called"<<std::endl;
};
Brain::Brain(const Brain &other){
    std::cout<< "Brain Copy constructor called"<<std::endl;
    *this = other;
};
Brain::~Brain(){
    std::cout<<"Brain Destructor called"<<std::endl;
};
Brain & Brain::operator=(const Brain &other){
    std::cout<< "Animal Copy op called"<<std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
};



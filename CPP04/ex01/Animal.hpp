/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:25 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/16 10:23:25 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal{
   protected :
        std::string type;
    public :
        Animal();
        Animal(Animal &other);
        virtual std::string getType() const;
        virtual  void makeSound() const{};
        Animal &operator=(const Animal& other);  
        ~Animal();
};
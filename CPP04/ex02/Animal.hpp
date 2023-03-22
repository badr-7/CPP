/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:25 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/22 13:24:18 by mel-hous         ###   ########.fr       */
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
        virtual std::string getType() const = 0;
        virtual  void makeSound() const = 0;
        Animal &operator=(const Animal& other);  
        virtual ~Animal();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:20:25 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/20 09:01:06 by mel-hous         ###   ########.fr       */
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
        Animal &operator=(const Animal& other);  
        virtual ~Animal();
        
        virtual  void makeSound() const;
        virtual std::string getType() const;
};

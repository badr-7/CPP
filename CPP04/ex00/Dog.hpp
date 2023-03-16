/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/16 10:24:46 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal{
    public :
        Dog();
        Dog(Dog &other);
        void makeSound() const;
        std::string getType() const;
        Dog& operator=(const Dog &other);
        ~Dog();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 14:07:56 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    Brain* _brain;
    public :
        Dog();
        Dog(Dog &other);
        void makeSound() const;
        std::string getType() const;
        Dog& operator=(const Dog &other);
        ~Dog();
};
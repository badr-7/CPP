/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:19 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 14:12:41 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    Brain* _brain;
    public :
        Cat();
        Cat(Cat &other);
        void makeSound() const;
        std::string getType() const;
        Cat& operator=(const Cat &other);
        ~Cat();
};
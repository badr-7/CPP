/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:37:36 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 11:57:02 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class WrongAnimal 
{
    protected:
        std::string type;
    public:
        WrongAnimal ();
        WrongAnimal (const WrongAnimal &other);
        std::string getType();
        void makeSound() const;
        ~WrongAnimal ();
        WrongAnimal & operator = (const WrongAnimal &other);
};
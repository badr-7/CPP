/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:27 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 11:56:41 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
  const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();

    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    w->makeSound();

    delete meta;
    delete j;
    delete i;
    delete w;
    return 0;
}
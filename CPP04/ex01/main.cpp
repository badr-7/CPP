/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:27 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/22 13:52:57 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    j->makeSound();
    delete j;
	j = new Cat();
    j->makeSound();
	delete j;
    
    Animal	*a[8];

	for(int i=0; i<8; i++) {
		if (i < 4) {
			a[i] = new Dog();
		}
		else {
			a[i] = new Cat();
		}
	}
	for(int i=0; i<8; i++) {
		std::cout<<a[i]->getType()<<std::endl;
		a[i]->makeSound();
		delete a[i];
	}
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:42:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/22 14:32:47 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
me->equip(new Ice());
me->equip(new Cure());
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
me->use(3, *bob);
me->unequip(0);
me->unequip(3);
me->equip(new Ice());
me->equip(new Ice());
me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
me->use(3, *bob);
delete bob;
delete me;
delete src;
return 0;
}
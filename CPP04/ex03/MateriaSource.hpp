/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:52 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 14:53:35 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"IMateriaSoutce.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria *materias[4];
public:
    MateriaSource ();
    MateriaSource (const MateriaSource &other);
    ~MateriaSource ();
    MateriaSource & operator = (const MateriaSource &a);
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:47:03 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 16:30:18 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &other){
     for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    *this = other;
}
MateriaSource::~MateriaSource(){
    
}
MateriaSource & MateriaSource::operator = (const MateriaSource &other){
    for (int i = 0; i < 4; i++)
    {
        delete materias[i];
        if(other.materias[i])
            materias[i] = other.materias[i]->clone();
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (materias[i] == NULL)
        {
            materias[i] = m;
            break;
        }
    }    
}
AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++)
    {
        if(materias[i] && materias[i]->getType() == type)
            return(materias[i]->clone());
    }
    return 0;
}
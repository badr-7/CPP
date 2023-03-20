/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:52 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/20 15:58:55 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"IMateriaSoutce.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource ();
    MateriaSource (const MateriaSource &other);
    ~MateriaSource ();
    MateriaSource & operator = (const MateriaSource &a);
};
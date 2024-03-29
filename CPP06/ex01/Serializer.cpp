/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:11:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 13:20:40 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Serializer::Serializer()
{
}
Serializer Serializer::build()
{
    return Serializer();
}
/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Serializer::~Serializer()
{
}

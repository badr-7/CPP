/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:11:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/02 15:36:22 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Serializer::Serializer(){
}
Serializer::Serializer(Serializer& other){
    *this = other;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Serializer& Serializer::operator=(const Serializer& other){
    (void)other;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]


/////////////////////////////////////////////////////////////////////[FUNCTIONS]

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Serializer::~Serializer(){
}

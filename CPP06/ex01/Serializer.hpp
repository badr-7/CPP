/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:11:27 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 13:20:45 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int i;
    char c;
};

class Serializer
{
    Serializer();

public:
    static Serializer build();
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
    ~Serializer();
};
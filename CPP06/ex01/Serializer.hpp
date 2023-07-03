/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:11:27 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/03 10:13:38 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
    int i;
    char c;
};

class Serializer
{
public:
    Serializer();
    Serializer(Serializer& );
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    Serializer& operator=(const Serializer& );
    ~Serializer();
};

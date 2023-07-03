/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:34:20 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/03 10:22:48 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data dataObj;
    dataObj.i = 42;
    dataObj.c = 'b';

    uintptr_t serialized = Serializer::serialize(&dataObj);

    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == &dataObj) {
        std::cout << "Serialization and deserialization successful." << std::endl;
    } else {
        std::cout << "Serialization or deserialization failed." << std::endl;
    }

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:31:45 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/02 08:55:05 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    Base* obj1 = generate();
    Base* obj2 = generate();

    identify(obj1);
    identify(obj2);

    delete obj1;
    delete obj2;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:31:39 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/02 09:00:22 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

/////////////////////////////////////////////////////////////////////[GETTERS]


/////////////////////////////////////////////////////////////////////[FUNCTIONS]

Base * generate(void){
    int choice = std::rand() % 3;

    if (choice == 0)
        return new A();
    else if (choice == 1)
        return new B();
    else
        return new C();
};
void identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return;
    } catch (const std::bad_cast&) {
    }

    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return;
    } catch (const std::bad_cast&) {
    }

    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return;
    } catch (const std::bad_cast&) {
    }
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Base::~Base(){
}

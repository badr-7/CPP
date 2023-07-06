/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:31:39 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 13:16:32 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

Base *generate(void)
{
    std::srand(std::time(0));
    int i = std::rand() % 3;

    if (i == 0)
        return new A();
    else if (i == 1)
        return new B();
    else
        return new C();
};
void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return;
    }
    catch (std::bad_cast &)
    {
        std::cout << "bad cast for A" << std::endl;
    }

    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return;
    }
    catch (std::bad_cast &)
    {
        std::cout << "bad cast for B" << std::endl;
    }

    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch (std::bad_cast &)
    {
        std::cout << "bad cast for C" << std::endl;
    }
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Base::~Base()
{
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 08:31:42 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/03 14:35:07 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Base
{
public:
    virtual ~Base();
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};
Base *generate(void);
void identify(Base *p);
void identify(Base &p);
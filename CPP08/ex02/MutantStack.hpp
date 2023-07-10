/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:35:56 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/10 11:45:22 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){
    };
    iterator begin(){
        return c.begin();
    }
    iterator end(){
        return c.end();
    }
    ~MutantStack(){
    };
};

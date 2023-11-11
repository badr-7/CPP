/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:35:56 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/11 10:00:50 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>


template<typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack(){};
    MutantStack(MutantStack const &other)
    {
        *this = other;
    };
    MutantStack &operator=(MutantStack const &other)
    {
        if (this != &other)
	    {
	    	this->c = other.c;
	    }
	    return (*this);
    };
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(){
        return this->c.begin();
    };
    iterator end(){
        return this->c.end();
    };
    const_iterator cbegin(){
        return this->c.cbegin();
    };
    const_iterator cend(){
        return this->c.cend();
    };
    reverse_iterator rbegin(){
        return this->c.rbegin();
    };
    reverse_iterator rend(){
        return this->c.rend();
    };
    const_reverse_iterator crbegin(){
        return this->c.crbegin();
    };
    const_reverse_iterator crend(){
        return this->c.crend();
    };
    ~MutantStack(){
    };
};
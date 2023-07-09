/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:33:19 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/07 10:29:10 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int size;

public:
    Array()
    {
        this->array = NULL;
        this->size = 0;
    };
    Array(unsigned int n)
    {
        this->array = new T[n];
        this->size = n;
    };
    Array(Array &other)
    {
        *this = other;
    };
    T  &operator[](unsigned int ind) const
    {
        if(ind >= this->size)
            throw std::out_of_range ("index is out of range");
        else
            return this->array[ind];
    };
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            this->size = other.getsize();
            this->array = new T[size];
            for (unsigned int i = 0; i < size; i++)
            {
                this->array[i] = other.array[i];
            }
        }
        return *this;
    };
    unsigned int getsize() const
    {
        return size;
    }
    ~Array()
    {
        delete[] array;
    };
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:33:19 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 17:38:42 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int size;

public:
    Array()
    {
        this->arr = NULL;
        this->size = 0;
    };
    Array(unsigned int n)
    {
        this->arr = new T[n];
        this->size = n;
    };
    Array(Array &other)
    {
        *this = other;
    };
    T  &operator[](unsigned int ind)
    {
        if(ind >= this->size)
            throw std::out_of_range ("index is out of bounds");
        else
            return this->arr[ind];
    };
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            this->size = other.getsize();
            this->arr = new T[size];
            for (unsigned int i = 0; i < size; i++)
            {
                this->arr[i] = other.arr[i];
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
        delete[] arr;
    };
};
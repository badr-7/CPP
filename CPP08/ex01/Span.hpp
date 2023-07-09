/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:02:51 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/09 14:29:33 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class Span
{
private:
    std::vector<int> numbers;
    unsigned int size;

public:
    Span(unsigned int);
    Span &operator=(const Span &);
    void addNumber(unsigned int);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    ~Span();
};

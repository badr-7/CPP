/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:02:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/06 16:27:25 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]


Span::Span(unsigned int i) : size(i) {

}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Span& Span::operator=(const Span& other){
    if (this != &other)
    {
        this->size = other.size;
        this->numbers.clear();
        this->numbers = other.numbers;
    }
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]


/////////////////////////////////////////////////////////////////////[FUNCTIONS]

bool cmp(int a, int b) {
    return a < b;
}

void Span::addNumber(unsigned int i){
    if(this->numbers.size() < this->size)
        numbers.push_back(i);
}
unsigned int Span::shortestSpan(){
    int smallest = -1;
    int tmp = 0;
    std::vector<int> tmp_numbers = numbers;
    if (this->numbers.size() < 2){
        throw std::runtime_error("");
    }
    std::sort(tmp_numbers.begin(), tmp_numbers.end(), cmp);
    for(unsigned int i = 0; i < tmp_numbers.size(); i++)
    {
        tmp = abs(tmp_numbers[i] - tmp_numbers[i + 1]);
        if(tmp < smallest || smallest == -1)
            smallest = tmp;
    }
    return(smallest);
}
unsigned int Span::longestSpan(){
    if (this->numbers.size() < 2){
        throw std::runtime_error("");
    }
    return(*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}



/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Span::~Span(){
}

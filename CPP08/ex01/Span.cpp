/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:02:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/11 10:51:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
#include <stdlib.h>
#include <time.h>


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]
Span::Span(){
}
Span::Span(const Span &obj){
        *this = obj;
}

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

unsigned int distance(std::vector<int>::iterator a, std::vector<int>::iterator b){
    unsigned int i = 0;

    while (a != b){
        a++;
        i++;
    }
    return i;
}

bool cmp(int a, int b) {
    return a < b;
}

void Span::addNumber(unsigned int i){
    if(this->numbers.size() < this->size)
        numbers.push_back(i);
    else{
        throw std::runtime_error("No Space Left");
    }
}
unsigned int Span::shortestSpan(){
    int smallest = -1;
    int tmp = 0;
    std::vector<int> tmp_numbers = numbers;
    if (this->numbers.size() < 2){
        throw std::runtime_error("No Span Can Be Found");
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
        throw std::runtime_error("No Span Can Be Found");
    }
    return(*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}
void Span::fillspan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(this->size - this->numbers.size() >= distance(begin,end)){
        for (; begin != end; begin++)
            this->addNumber(*begin);
    }
    else{
        throw std::runtime_error("No Space Left");
    }
}



/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Span::~Span(){
}

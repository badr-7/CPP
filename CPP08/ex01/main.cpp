/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:02:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/11 11:07:13 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
Span sp = Span(10000);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::vector<int> test;
srand(time(0));
for(int i = 0 ; i < 9995; i++){
    test.push_back(rand());
}
try{
    sp.fillspan(test.begin(), test.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addNumber(1337);
}
catch(std::exception &ex){
    std::cout<<ex.what()<<std::endl;
    try{
        Span sp2 = Span(5);
        sp2.addNumber(6);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        }catch(std::exception &ex){
        std::cout<<ex.what()<<std::endl;
    }
}
return 0;
}
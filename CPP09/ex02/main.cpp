/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:23:59 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/25 02:49:13 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <ctime>

int main(int ac, char **av){
	if(ac < 2)
	{
		std::cout<<"ERROR"<<std::endl;
		return 1;
	}
	std::string s;
	take_input(s,av);
	std::vector<int> vec;
	std::deque<int> deq;
try
{
	vec = StoreData<std::vector<int> >(s);
	deq = StoreData<std::deque<int> >(s);
	std::cout<<"Before: "<<s<<std::endl;
	clock_t c1 = clock();
	vec = sort(vec);
	 clock_t c2 = clock();
	 double elapsed_time = (double)(c2 - c1) / CLOCKS_PER_SEC;
	std::cout<<"After: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
	std::cout<<"\n";
	
	std::cout<<"Time to process a range of "<< vec.size()<<" elements with std::vector : "<<elapsed_time * 1000000 <<" us"<<std::endl;
	 c1 = clock();
	deq = sort(deq);
	  c2 = clock();
	  elapsed_time = (double)(c2 - c1) / CLOCKS_PER_SEC;

	std::cout<<"Time to process a range of "<< deq.size()<<" elements with std::deque : "<<elapsed_time * 1000000 <<" us"<<std::endl;
	
}
catch(const std::exception& e)
{
	std::cerr << e.what() << ' ';
}
}
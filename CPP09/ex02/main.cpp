/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:23:59 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/24 20:54:22 by mel-hous         ###   ########.fr       */
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
	clock_t start = clock();
	vec = sort(vec);
	 clock_t end = clock();
	 double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout<<"After: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
	std::cout<<"\n";
	
	std::cout<<"Time to process a range of "<< vec.size()<<" elements with std::vector : "<<elapsed_time * 1e6 <<" us"<<std::endl;
	 start = clock();
	deq = sort(deq);
	  end = clock();
	  elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

	std::cout<<"Time to process a range of "<< deq.size()<<" elements with std::deque : "<<elapsed_time * 1e6 <<" us"<<std::endl;

	
}
catch(const std::exception& e)
{
	std::cerr << e.what() << ' ';
}
}
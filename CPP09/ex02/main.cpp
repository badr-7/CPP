/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:23:59 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/24 03:21:43 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <ctime>

int main(int ac, char **av){
	if(ac != 2)
	{
		std::cout<<"ERROR"<<std::endl;
		return 1;
	}
	std::string s = av[1];
	std::vector<int> vec;
	std::deque<int> deq;
try
{
	vec = StoreData<std::vector<int> >(s);
	deq = StoreData<std::deque<int> >(s);
	clock_t start_time = clock();
	vec = sort(vec);
	 clock_t end_time = clock();
	 double elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Elapsed time: " << elapsed_time * 1e6  << " us" << std::endl;
	 start_time = clock();
	deq = sort(deq);
	  end_time = clock();
	  elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

    std::cout << "Elapsed time: " << elapsed_time * 1e6 << " us" << std::endl;

	
}
catch(const std::exception& e)
{
	std::cerr << e.what() << ' ';
}
}
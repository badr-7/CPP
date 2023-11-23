/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:53:38 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/22 17:40:17 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <vector>

void insertionSort(std::vector<int> &vec);
std::vector<int> merge(std::vector<int> vec1,std::vector<int> vec2);
std::vector<int> sort(std::vector<int> vec);
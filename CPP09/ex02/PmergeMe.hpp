/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:53:38 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/24 02:58:52 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <sstream>

template <class T>
void insertionSort(T &vec){
    size_t i = 1;
    while (i < vec.size())
    {
        int tmp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > tmp)
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = tmp;
        i++;
    }

}

template <class T>
T merge(T vec1,T vec2){
    size_t i = 0;
    size_t j = 0;

    T tmp;
    for(;i<vec1.size() && j < vec2.size();){
        if(vec1[i] <= vec2[j])
            tmp.push_back(vec1[i++]);
        else
            tmp.push_back(vec2[j++]);
    }
    while(i<vec1.size())
        tmp.push_back(vec1[i++]);
    while(j<vec2.size())
        tmp.push_back(vec2[j++]);
    return(tmp);
}

template <class T>
T sort(T vec){
    if(vec.size() > 2){
        int half = vec.size() / 2;
        T vec1(vec.begin(),vec.begin() + half);
        T vec2(vec.begin() + half,vec.end());
        vec1 = sort(vec1);
        vec2 = sort(vec2);
        vec = merge(vec1,vec2);
    }else{
        insertionSort(vec);
    }
    return(vec);
}

template <class T>
T StoreData(std::string s){
    int size = s.size();
    T vec;

    for (int i = 0; i < size; i++)
    {
        if((s[i] >= '0' && s[i] <= '9') || s[i] == '+' || s[i] == '-')
        {
            if(s[i] == '+' || s[i] == '-')
                if(!std::isdigit(s[i + 1]))
                    throw std::runtime_error("Error");
            std::istringstream ss(&s[i]);
            int tmp;
            ss >> tmp;
            vec.push_back(tmp);
            while (std::isdigit(s[i]))
                i++;
            
        }
        else if(s[i] == ' ' || s[i] == '\t')
            continue;
        else
            throw std::runtime_error("Error");
    }
    return vec;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:58:42 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/16 09:45:14 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>

#define MaxDay 31
#define MinDay 0
#define MaxMounth 12
#define MinMounth 0
#define MaxYear 2023

struct date{
    int year;
    int month;
    int day;
};

std::map<std::string,float> storedata();
std::map<std::string,float> parse(std::ifstream &myfile, std::map<std::string,float> db);

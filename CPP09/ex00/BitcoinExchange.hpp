/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:58:42 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/24 02:04:40 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

struct date{
    int year;
    int month;
    int day;
};

std::map<std::string,float> storedata();
void process(std::ifstream &myfile, std::map<std::string,float> db);
void execute(std::map<std::string,float> db, std::string date,float value);
bool checkValue(std::string value);
std::map<std::string,float> storedata();
bool check_date(std::string s);
bool CheckWhitespace(std::string line);
void removeWhitespace(std::string& line);
bool check_line(std::string s);

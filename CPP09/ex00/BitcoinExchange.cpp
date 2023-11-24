/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:07:26 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/24 02:11:32 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool check_line(std::string s){
    if(std::count(s.begin(), s.end(), ',') > 1 || std::count(s.begin(), s.end(), '-') > 3
        || std::count(s.begin(), s.end(), '.') > 1 || std::count(s.begin(), s.end(), '|') > 1){
        return false;
    }
    return true;
}

void removeWhitespace(std::string& line){
    size_t begin = line.find_first_not_of(" \t");
    if (begin == std::string::npos)
        return;
    int end = 0;
    for(std::string::reverse_iterator it = line.rbegin(); it != line.rend(); it++)
    {
        if((*it == ' ' || *it == '\t'))
            end++;
         else{break;}
    }
    line = line.substr(begin, line.size() - (end + begin));
}

bool CheckWhitespace(std::string line){
    removeWhitespace(line);
    for(std::string::iterator it = line.begin(); it != line.end(); it++)
    {
        if((*it == ' ' || *it == '\t'))
            return false;
    }
    return true;
}

bool check_date(std::string s){
    date dt;
    char sp;
    int feb = 28;
    if (!CheckWhitespace(s)){
        std::cout <<"Error: invalide date => "<<s<<std::endl;
        return (false);
    }
    std::istringstream str(s);
    str >> dt.year >> sp >> dt.month >> sp >> dt.day;
    if (dt.year < 1 || dt.year > 9999) {
		std::cout <<"Error: invalide date => "<<s<<std::endl;
        return (false);
	}
	if (dt.month < 1 || dt.month > 12) {
		std::cout <<"Error: invalide date => "<<s<<std::endl;
        return (false);
	}
	if (dt.day < 1 || dt.day > 31){
		std::cout <<"Error: invalide date => "<<s<<std::endl;
        return (false);
    }
    if(dt.month == 4 || dt.month == 6 || dt.month == 9 || dt.month == 11)
    {
        if (dt.day == 31){
            std::cout <<"Error: invalide date => "<<s<<std::endl;
            return (false);
        }
    }
    if(dt.month == 2)
    {
        if (dt.year % 4 == 0 && (dt.year % 100 != 0 || dt.year % 400 == 0))
            feb = 29;
        if(dt.day > feb){
            std::cout <<"Error: bad input => "<<s<<std::endl;
            return (false);
        }
    }
    return (true);
}


std::map<std::string,float> storedata()
{
    std::ifstream myfile; 
    myfile.open("./data.csv");
    std::map<std::string,float> data;
    std::string line;
    std::string date;
    std::string value_string;
    float value;
    size_t pose;
    std::getline(myfile,line);
    while (std::getline(myfile,line)){
        pose = line.find(',');
        if(pose != std::string::npos){
            date = line.substr(0, pose);
            removeWhitespace(date);
            value_string = line.substr(pose + 1);
            std::istringstream(value_string) >> value;
            data[date] = value;
        }
    }
    return(data);
}
bool checkValue(std::string value){

    std::istringstream ss(value);
    float v;
    ss >> v;
    if(v < 0){
        std::cout<< "Error: not a positive number."<<std::endl;
        return false;
    }
    if(v > 1000){
        std::cout<< "Error: too large a number."<<std::endl;
        return false;
    }
    if(value[0] == '.' || value[value.size()] == '.'){
        std::cout<< "Error: invalide value"<<std::endl;
        return false;
    }
    return true;

}

void execute(std::map<std::string,float> db, std::string date,float value){
    std::map<std::string,float>::iterator it = db.find(date);
    if(it != db.end())
    {
       std::cout<< date <<" => "<<value<<" = "<< it->second * value << std::endl;
    }
    else{
        it = db.lower_bound(date);
        if(it != db.begin())
        {
            --it;
            std::cout<< date <<" => "<<value<<" = "<< it->second * value << std::endl;
        }
        else{
            std::cout<<"Value Not Found For This Date => "<< date <<std::endl;
        }
    }

}
void AdjDateShape(std::string &s){
    int pos = s.find('-',s.find('-') + 1);
    std::string day = s.substr(pos + 1);
    if (day.size() == 1)
    {
        day = "0" + day;
        s.erase(pos + 1);
        s = s + day;
    }
    int pos2 = s.find('-');
    std::string month = s.substr(pos2 + 1, (s.find('-',s.find('-') + 1) - pos2) - 1);
    if (month.size() == 1)
    {
        month = "0" + month;
        s.erase(pos2 + 1);
        s = s + month +"-" + day;
    }
}
void process(std::ifstream &myfile, std::map<std::string,float> db)
{
    std::map<std::string,float> data;
    std::string line;
    std::string date;
    std::string value_string;
    float value;
    size_t pose;
    std::getline(myfile,line);
    while (std::getline(myfile,line)){
        pose = line.find('|');
        if(check_line(line) && pose != std::string::npos){
            date = line.substr(0, pose);
            if(!check_date(date))
                continue;
            removeWhitespace(date);
            AdjDateShape(date);
            value_string = line.substr(pose + 1);
            removeWhitespace(value_string);
            if (!std::isdigit(value_string[0])){
                std::cout <<"Error: bad input => "<<line<<std::endl;
                continue;
            }
            if (!checkValue(value_string) || value_string.find(' ') != std::string::npos || value_string.find('\t') != std::string::npos)
                continue;
            std::istringstream(value_string) >> value;
            execute(db,date,value);
            data[date] = value;
        }
        else{
           std::cout <<"Error: bad input => "<<line<<std::endl;
        }
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:20:46 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 15:26:55 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(){
    size = 0;
    add_index = 0;
}

int PhoneBook::check_arg(std::string s)
        {
            int i = 0;

            while(s[i])
            {
                if(s[i]>= 33 && s[i] <= 126)
                    return(1);
                i++;
            }
            return(0);
        };
void PhoneBook::Add()
        {
            std::string s;
            if(add_index == 8)
                add_index = 0;
            contact[add_index].index = add_index + 1;
            while(check_arg(s) == 0)
            {
                std::cout<<"first name: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            if(s.length() > 10)
            {
                s.resize(10);
                s[9] = '.';
            }
            contact[add_index].SetFirstName(s);
            s = "";
            while(check_arg(s) == 0)
            {
                std::cout<<"last name: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            if(s.length() > 10)
            {
                s.resize(10);
                s[9] = '.';
            }
            contact[add_index].SetLastName(s);
            s = "";
            while(check_arg(s) == 0)
            {
                std::cout<<"nickname: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            if(s.length() > 10)
            {
                s.resize(10);
                s[9] = '.';
            }
            contact[add_index].SetNickname(s);
            s = "";
            while(check_arg(s) == 0)
            {
                std::cout<<"phone number: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            if(s.length() > 10)
            {
                s.resize(10);
                s[9] = '.';
            }
            contact[add_index].SetPhoneNumber(s);
            s = "";
            while(check_arg(s) == 0)
            {
                std::cout<<"darkest secret: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            contact[add_index].SetDarkestSecret(s);
            if(size < 8)
                size = add_index + 1;
            add_index++;
        };
void PhoneBook::Search()
{
    int a = 0;
    std::string input;
    std::cout<<"|"<<std::setw(10)<< "index"<< "|"
        <<std::setw(10)<<"first name"<< "|"
        <<std::setw(10)<<"last name"<< "|"
        <<std::setw(10)<<"nickname"<< "|"<<std::endl;
    for(int j = 0; j < size - 1; j++)
    {
        std::cout<<"|"<<std::setw(10)<<contact[j].index<< "|"
        <<std::setw(10)<<contact[j].GetFirstName()<< "|"
        <<std::setw(10)<<contact[j].GetLastName()<< "|"
        <<std::setw(10)<<contact[j].GetNickname()<< "|"<<std::endl;
    }
    std::cout<<"Please enter an index: ";
    if (std::getline(std::cin, input)) {
        if (input.length() == 1 && std::isdigit(input[0]))
            a = std::atoi(input.c_str());
    }
    else 
        exit(0);
    if ((a >= 1 && a <= 8) && a <= size)
    {
        std::cout<<"first name: "<<contact[a - 1].GetFirstName()<<std::endl
        <<"last name: "<<contact[a - 1].GetLastName()<<std::endl
        <<"nickname: "<<contact[a - 1].GetNickname()<<std::endl
        <<"phone number: "<<contact[a - 1].GetPhoneNumber()<<std::endl
        <<"darkest secret: "<<contact[a - 1].GetDarkestSecret()<<std::endl;
    }
    else
         std::cout<<"ERROR"<<std::endl;
};

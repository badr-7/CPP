/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:20:46 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/17 18:34:14 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

 int PhoneBook::check_arg(std::string s)
        {
            int i = 0;
            int mode = 0;

            while(s[i])
            {
                if(s[i]>= 33 && s[i] <= 126)
                    return(1);
                i++;
            }
            return(0);
        };
void PhoneBook::PhoneBook::Add(int i)
        {
            std::string s;
            contact[i].index = i + 1;
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
            contact[i].SetFirstName(s);
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
            contact[i].SetLastName(s);
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
            contact[i].SetNickname(s);
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
            contact[i].SetPhoneNumber(s);
            s = "";
            while(check_arg(s) == 0)
            {
                std::cout<<"darkest secret: ";
                if (!std::getline(std::cin,s))
                    exit(0);
            }
            contact[i].SetDarkestSecret(s);
        };
void PhoneBook::Search(int i)
{
    int a;
    std::cout<<"|"<<std::setw(10)<< "index"<< "|"
        <<std::setw(10)<<"first name"<< "|"
        <<std::setw(10)<<"last name"<< "|"
        <<std::setw(10)<<"nickname"<< "|"<<std::endl;
    for(int j = 0; j < i; j++)
    {
        std::cout<<"|"<<std::setw(10)<<contact[j].index<< "|"
        <<std::setw(10)<<contact[j].GetFirstName()<< "|"
        <<std::setw(10)<<contact[j].GetLastName()<< "|"
        <<std::setw(10)<<contact[j].GetNickname()<< "|"<<std::endl;
    }
    std::cout<<"Please enter an index: ";
    std::cin>>a;
    if ((a >= 1 && a <= 8) && a <= i)
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
void PhoneBook::Exit()
{
    exit(0);
};
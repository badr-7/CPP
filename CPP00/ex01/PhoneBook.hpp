/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:35:33 by mel-hous          #+#    #+#             */
/*   Updated: 2022/12/31 14:53:05 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contact[8];
    public:
        int check_arg(std::string s)
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
        void Add(int i)
        {
            std::string s;
            contact[i].index = i + 1;
            while(check_arg(s) == 0)
            {
                std::cout<<"first name: ";
                std::getline(std::cin,s);
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
                std::getline(std::cin,s);
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
                std::getline(std::cin,s);
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
                std::getline(std::cin,s);
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
                std::getline(std::cin,s);
            }
            contact[i].SetDarkestSecret(s);
        };
        void Search(int i)
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
        void Exit()
        {
            exit(0);
        };
               
};
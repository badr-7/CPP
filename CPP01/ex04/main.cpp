/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:58:25 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 17:43:21 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) 
{
    if (ac != 4)
        std::cout << "ARGUMENTS NOT VALID" << std::endl;
    else
    {
        std::ifstream file_to_read(av[1]);
        if(!file_to_read)
        {
            std::cout << "ERROR : The file can't be open"<< std::endl;
            return(1);
        }
        std::string s = av[1];
        std::string s2 = av[2];
        std::string s3 = av[3];
        std::string line;
        s.append(".replace");
        std::ofstream file_to_store(s);
        std::getline(file_to_read,line,'\0');
        if(!file_to_store)
        {
            std::cout << "ERROR : The file can't be create"<< std::endl;
            return(1);
        }
        if (s2 == s3)
            file_to_store << line;
        else{
            unsigned long position = 0;
            position = line.find(s2);
            while(position != std::string::npos)
            {
                line.erase(position,s2.length());
                line.insert(position,s3);
                position = line.find(s2);
            }
            file_to_store << line;
        }
        file_to_store.close();
        file_to_read.close();
    }
    return 0;
}

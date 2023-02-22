/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:58:25 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/21 11:38:57 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) 
{
    if (ac < 4 || ac > 4)
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
        if(!file_to_store)
        {
            std::cout << "ERROR : The file can't be create"<< std::endl;
            return(1);
        }
        while(std::getline(file_to_read,line)){
            int position = -1;
            position = line.find(s2);
            if(position != std::string::npos)
            {
                line.erase(position,s2.length());
                line.insert(position,s3);
                file_to_store << line.append("\n");
            }
            else
                file_to_store << line.append("\n");
        }
        file_to_store.close();
        file_to_read.close();
    }
    return 0;
}

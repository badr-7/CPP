/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:46:44 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/14 13:47:04 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
    void announce( void )
    {
        std::cout<<Name<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
    };
    void setzombiename(std::string z_name)
    {
        Name = z_name;
    };
    ~Zombie(){
        std::cout<< Name <<std::endl;
    };
};
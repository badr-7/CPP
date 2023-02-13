/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:01:35 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/13 12:54:31 by mel-hous         ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:01:35 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 17:39:48 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
private:
    std::string _Name;
public:
    void announce( void );
    Zombie(std::string name);
    Zombie(){};
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

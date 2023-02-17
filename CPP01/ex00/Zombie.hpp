/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:01:35 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/15 15:32:00 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
private:
    std::string Name;
public:
    void announce( void );
    void setzombiename(std::string z_name);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

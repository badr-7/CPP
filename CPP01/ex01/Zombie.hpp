/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:46:44 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 08:45:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
    void announce(void);
    void setzombiename(std::string z_name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
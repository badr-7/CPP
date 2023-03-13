/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:47:41 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/13 14:56:35 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap &other);
        void attack(const std::string& target);
         void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap& operator=(ClapTrap& other);
};
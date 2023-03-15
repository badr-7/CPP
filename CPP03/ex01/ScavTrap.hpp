/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:33:00 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 09:44:51 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(ScavTrap &other);
        ScavTrap(std::string name);
        void attack(const std::string& target);
        ~ScavTrap();
        void guardGate();
        ScavTrap& operator=(ScavTrap& other);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:40:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 13:28:29 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(FragTrap &other);
        FragTrap(std::string name);
        void attack(const std::string& target);
        void highFivesGuys(void);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
};
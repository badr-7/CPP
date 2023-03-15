/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:40:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 09:24:16 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
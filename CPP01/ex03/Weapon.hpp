/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:25:39 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 11:32:12 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Weapon {
    private :
        std::string _weapon;
    public :
        Weapon(std::string name);
        const std::string    &getType() const;
        void    setType(std::string name);        
};
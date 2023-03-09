/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:25:39 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 17:40:46 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Weapon {
    private :
        std::string _weapon;
    public :
        Weapon(std::string name);
        ~Weapon(){};
        const std::string    &getType() const;
        void    setType(std::string name);        
};
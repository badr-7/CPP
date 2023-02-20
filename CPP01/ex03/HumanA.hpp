/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:08:15 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 14:36:08 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void setname(std::string name);
        void   attack();
    private:
        std::string _name;
        Weapon &_weapon;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:30:35 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 14:40:03 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp" 

class HumanB{
    private:
        std::string _name;
        Weapon *_weapon;
    public :
        HumanB(std::string name);
        ~HumanB();
        void setname(std::string name);
        void setWeapon(Weapon NewWewpen);
        void   attack();
};
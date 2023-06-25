/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:47 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/25 10:32:17 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma "once"
#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
private:
    /* data */
public:
    RobotomyRequestForm(RobotomyRequestForm& other);
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:47 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 08:53:41 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma "once"
#include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
private:
   std::string Target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm&);
    void   execute(Bureaucrat const &) const;
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();
};

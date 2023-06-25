/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:42 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/25 10:30:09 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma "once"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    /* data */
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();
};


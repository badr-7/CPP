/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:42 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 08:49:49 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma "once"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string Target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(PresidentialPardonForm& );
    void    PresidentialPardonForm::execute(Bureaucrat const &) const;
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();
};


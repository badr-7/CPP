/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:08:54 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/21 09:18:53 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Form{
    private :
        const std::string name;
        bool _signed;
        const int GradeToSign;
        const int GradeToExecute;
    public :
        Form();
        Form(Form &);
        Form(std::string ,bool ,int ,int);
        ~Form();
        Form &operator=(const Form& other);
        
};
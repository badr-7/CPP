/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/25 09:47:02 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Form imad("imad", false, 10, 20);
    Bureaucrat abid("abid", 18);
    try
    {
        imad.beSigned(abid);
        abid.signForm(imad);
        std::cout << imad;
        std::cout << abid;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    abid.signForm(imad);
    return 0;
}
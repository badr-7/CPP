/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:10:15 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/19 17:13:25 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string  Contact::GetFirstName()
{
    return(_FirstName);
};
std::string  Contact::GetLastName()
{
    return(_LastName);
};
std::string  Contact::GetNickname()
{
    return(_NickName);
};
std::string  Contact::GetPhoneNumber()
{
    return(_PhoneNumber);
};
std::string  Contact::GetDarkestSecret()
{
    return(_DarkestSecret);
};
void  Contact::SetFirstName(std::string s)
{
    _FirstName = s;
};
void  Contact::SetLastName(std::string s)
{
    _LastName = s;
};
void  Contact::SetNickname(std::string s)
{
    _NickName = s;
};
void  Contact::SetPhoneNumber(std::string s)
{
    _PhoneNumber = s;
};
void  Contact::SetDarkestSecret(std::string s)
{
    _DarkestSecret = s;
};
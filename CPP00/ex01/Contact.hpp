/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:23:24 by mel-hous          #+#    #+#             */
/*   Updated: 2022/12/31 10:02:28 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact{
    private:
        std::string  _FirstName;
        std::string  _LastName;
        std::string  _NickName;
        std::string  _PhoneNumber;
        std::string  _DarkestSecret;
    public:
        int index;
        std::string  GetFirstName()
        {
            return(_FirstName);
        };
        std::string  GetLastName()
        {
            return(_LastName);
        };
        std::string  GetNickname()
        {
            return(_NickName);
        };
        std::string  GetPhoneNumber()
        {
            return(_PhoneNumber);
        };
        std::string  GetDarkestSecret()
        {
            return(_DarkestSecret);
        };
        void  SetFirstName(std::string s)
        {
            _FirstName = s;
        };
        void  SetLastName(std::string s)
        {
            _LastName = s;
        };
        void  SetNickname(std::string s)
        {
            _NickName = s;
        };
        void  SetPhoneNumber(std::string s)
        {
            _PhoneNumber = s;
        };
        void  SetDarkestSecret(std::string s)
        {
            _DarkestSecret = s;
        };
};

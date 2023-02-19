/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:23:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/19 17:13:58 by mel-hous         ###   ########.fr       */
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
        std::string  GetFirstName();
        std::string  GetLastName();
        std::string  GetNickname();
        std::string  GetPhoneNumber();
        std::string  GetDarkestSecret();
        void  SetFirstName(std::string s);
        void  SetLastName(std::string s);
        void  SetNickname(std::string s);
        void  SetPhoneNumber(std::string s);
        void  SetDarkestSecret(std::string s);
};

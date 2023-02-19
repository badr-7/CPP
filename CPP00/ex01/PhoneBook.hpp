/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:35:33 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/19 17:06:39 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contact[8];
        int size;
        int add_index;
    public:
        PhoneBook();
        int check_arg(std::string s);
        void Add();
        void Search();
};
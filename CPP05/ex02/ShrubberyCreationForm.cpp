/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:49 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 17:37:53 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include <fstream>


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

ShrubberyCreationForm::ShrubberyCreationForm(){
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other){
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
}

/////////////////////////////////////////////////////////////////////[GETTERS]


/////////////////////////////////////////////////////////////////////[FUNCTIONS]
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream outfile;
    if(executor.getGrade() <= 145 && executor.getGrade() <= 137)
    {
        outfile.open(this->Target + "_shrubbery");
        outfile <<      "                                                         .           "          << std::endl;
        outfile <<      "                                              .         ;           "           << std::endl;
        outfile <<      "                 .              .              ;%     ;;               "        << std::endl; 
        outfile <<      "                   ,           ,                :;;%;  %;                "      << std::endl;    
        outfile <<      "                    :         ;                   :;%;'     .,         "        << std::endl; 
        outfile <<      "           ,.        %;     %;            ;        %;'    ,;          "         << std::endl;
        outfile <<      "             ;       ;%;   %;        ,     %;    ;%;    ,%'       "             << std::endl;
        outfile <<      "              %;       ;%; %;      ,  ;       %;  ;%;   ,%;'             "      << std::endl;   
        outfile <<      "               ;%;      %;        ;%;        %; ;%;  ,%;'               "       << std::endl;   
        outfile <<      "                `%;.     ;%;     %;'         `;;%;;%;'                 "        << std::endl;   
        outfile <<      "                 `:;%.    ;;%. %@;        %; ;@%;;%'                   "        << std::endl;
        outfile <<      "                    `:%;.  :;bd%;          %;@%;'         "                     << std::endl;
        outfile <<      "                      `@%:.  :;%.         ;@@%;'      "                         << std::endl;
        outfile <<      "                        `@%.  `;@%.      ;@@%;             "                    << std::endl;
        outfile <<      "                          `@%. `@%;    ;@@%;         "                          << std::endl;
        outfile <<      "                            ;@%. :@%;  %@@%;          "                         << std::endl;
        outfile <<      "                              %@bd;%;bd%;:;       "                             << std::endl;
        outfile <<      "                                #@.##%:;;    "                                  << std::endl;
        outfile <<      "                                %@@##%::; "                                     << std::endl;
        outfile <<      "                                %@@@%(o);      . '         "                    << std::endl;
        outfile <<      "                                %@@@o%;:(.,'             "                      << std::endl;
        outfile <<      "                            `.. %@@@o%::;             "                         << std::endl;
        outfile <<      "                               `)@@@o%::;             "                         << std::endl;
        outfile <<      "                                %@@(o)::;         "                             << std::endl;
        outfile <<      "                               .%@@@@%::;             "                         << std::endl;
        outfile <<      "                               ;%@@@@%::;.            "                         << std::endl;
        outfile <<      "                              ;%@@@@##:;;;.   "                                 << std::endl;
        outfile <<      "                          ...;%@@@@@##:;;;;,..        "                         << std::endl;    
    }
    else 
        throw AForm::GradeTooLowException();
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

//          .     .  .      +     .      .          .
//      .       .      .     #       .           .
//         .      .         ###            .      .      .
//       .      .   "#:. .:##"##:. .:#"  .      .
//           .      . "####"###"####"  .
//        .     "#:.    .:#"###"#:.    .:#"  .        .       .
//   .             "#########"#########"        .        .
//         .    "#:.  "####"###"####"  .:#"   .       .
//      .     .  "#######""##"##""#######"                  .
//                 ."##"#####"#####"##"           .      .
//     .   "#:. ...  .:##"###"###"##:.  ... .:#"     .
//       .     "#######"##"#####"##"#######"      .     .
//     .    .     "#####""#######""#####"    .      .
//             .     "      000      "    .     .
//        .         .   .   000     .        .       .
// .. .. ..................O000O........................ ...... ...
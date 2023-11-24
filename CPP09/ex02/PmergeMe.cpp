#include "PmergeMe.hpp"

void take_input(std::string &s,char **input){
    input++;
    s = *input++;
    while(*input)
        s = s + " " + *input++;
}
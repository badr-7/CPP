#include "RPN.hpp"

void check_syn(std::string s){
    int a = -1;
    int b;
    char c;
    char space;
    std::istringstream ss(s);
    ss >> a;
    if (a == -1)
        throw std::runtime_error("invalide form.");
    for (std::string::iterator it = s.begin(); it != s.end(); it++)
    {
        // if (++it == s.end())
        //     break;
        ss >> b >> c;
        std::cout<<"space :"<<space<<"  b : "<<b<<"  c : "<<c<<std::endl;
        if (ss.fail())
            throw std::runtime_error("FAIL");
        // if (space != ' ')
        //     throw std::runtime_error("aaaa");
        
    }
    

}
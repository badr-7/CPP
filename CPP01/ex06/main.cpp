#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac == 2)
    {
        Harl obj;
        std::string s = av[1];
    
        obj.complain(s);
    }
}
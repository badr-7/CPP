#include "RPN.hpp"

bool check_line(std::string line){
    int size = line.size() - 1;

    while (size >= 0)
    {
        if(line[size] == '-' ||line[size] == '+'||line[size] == '*'||line[size] == '/')
        {
            if ((unsigned long)(size + 1) < line.size() && line[size+1] != ' '){
               return false;
            }
            else
                size--;
        }
        else if(line[size] >= '0' && line[size] <= '9'){
           if ((unsigned long)(size + 1) < line.size() && line[size+1] != ' ')
               return false;
            else
                size--;
        }
        else if(line[size] == ' ' || line[size] == '\t')
            size--;
        else
           return false;
    }
    return true;
}

std::stack<char> store_data(std::string s){
   int pose = s.size() - 1;
    std::stack<char> stack;

   while (pose >= 0) {
        while (pose >= 0 && (s[pose] == ' ' || s[pose] == '\t')) {
            pose--;
        }
        if (pose >= 0) {
            stack.push(s[pose]);
        }
        pose--;
    }
    return stack;
}
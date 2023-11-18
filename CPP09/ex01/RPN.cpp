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

std::stack<int> store_data(std::string &s){
   int pose = s.size() - 1;
    std::stack<int> stack;
    int i = 0;
   while (i <= pose ) {
        while (i >= 0 && (s[i] == ' ' || s[i] == '\t')) {
            i++;
        }
        if (i >= 0 && (s[i] >= '0' && s[i] <= '9')) {
            stack.push(s[i] - '0');
            // s.erase(i, 1);
        }
        else if(s[i] == '-' ||s[i] == '+'||s[i] == '*'||s[i] == '/'){
            action(stack, s[i]);
        }
        i++;
    }
    return stack;
}
// void add(std::stack<int>& db){
//     int a = db.top();
//     db.pop();
//     int b = db.top();
//     db.pop();
//     db.push(a + b);
// }
// void div(std::stack<int>& db){
//     int a = db.top();
//     db.pop();
//     int b = db.top();
//     db.pop();
//     db.push(a / b);
// }
// void mul(std::stack<int>& db){
//     int a = db.top();
//     db.pop();
//     int b = db.top();
//     db.pop();
//     db.push(a * b);
// }
// void min(std::stack<int>& db){
//     int a = db.top();
//     db.pop();
//     int b = db.top();
//     db.pop();
//     db.push(a - b);
// }

void action(std::stack<int>& db, char op){
    if(db.size() < 2)
        throw std::runtime_error("Erorr");
    int a = db.top();
    db.pop();
    int b = db.top();
    db.pop();
    if(op == '-')
        db.push(b - a);
    if(op == '+')
        db.push(b + a);
    if(op == '*')
        db.push(b * a);
    if(op == '/')
        db.push(b / a);
}
#include <iostream>
#include <string>
int a,b,sum;
std::string op;
int main(int argc, char *argv[])
{
    std::cout << "num1:";
    std::cin >> a;
    std::cout << "num2:";
    std::cin >> b;
    std::cout << "op(/,*,+,-):";
    std::cin >> op;
    if (op == "/") {sum=a/b;}
    if (op == "*") {sum=a*b;}
    if (op == "+") {sum=a+b;}
    if (op == "-") {sum=a-b;}
    else {std::cout << "invalid op";}
}

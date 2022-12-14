#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
    float a;
    float b;
    char c;
    float x;

   std::cout<<"What is the first number?";
   std::cin>> a;
   std::cout<<"What is the second number?";
   std::cin>> b;
   std::cout<<"What is the operator? +,-,*,/";
   std::cin>> c;
   
   switch(c)
   {
    case '+':
        x = a + b;
        std::cout<<x;
        break;
    case '-':
        x = a - b;
        std::cout<<x;
        break;
    case '*':
        x = a * b;
        std::cout<<x;
        break;
    case '/':
        x = a / b;
        std::cout<<x;
   }
}
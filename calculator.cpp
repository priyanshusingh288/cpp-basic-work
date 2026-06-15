#include<iostream>
int main(){
    char operator_;
    double num1;
    double num2;

    std::cout<<"enter the operator:(+,-,/,*): ";
    std::cin>>operator_;
    std::cout<<"enter num1: ";
    std::cin>>num1;
    std::cout<<"enter num2: ";
    std::cin>>num2;

    switch(operator_){
        case '+':
            std::cout<<num1<<'+'<<num2<<'='<<num1+num2;
            break;
            case '-':
            std::cout<<num1<<'-'<<num2<<'='<<num1-num2;
            break;
            case '/':
             if(num2!=0)
                {std::cout<<num1<<'/'<<num2<<'='<<num1/num2;}
                else{
                    std::cout<<"division by zero is not allowed";
                }
            break;
            case '*':
            std::cout<<num1<<'*'<<num2<<'='<<num1*num2;
            break;
            default:
            std::cout<<"invalid operator";
    }
          return 0;
}
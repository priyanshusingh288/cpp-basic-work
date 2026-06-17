#include<iostream>
#include<cmath>
int main(){
    double perpendicular;
    double base;
    double hypotenuse;

    std::cout<<"enter perpendicular: ";
    std::cin>>perpendicular;
    std::cout<<"enter base: ";
    std::cin>>base;

    hypotenuse = sqrt(pow(perpendicular,2)+pow(base,2));
    std::cout<<"the hypotenuse of triangle is : "<<hypotenuse;
    
    return 0;
}
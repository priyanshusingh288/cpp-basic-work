#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double height;
    double weight;
    int age;
    cout<<" enter your age: ";
    cin>>age;
    cout<<"enter your bodyweight in kg: ";
    cin>>weight;
    cout<<"enter your height in meters: ";
    cin>>height;

    double BMI;
    BMI = weight/pow(height,2);
    cout<<BMI<<" ";
    if(BMI>25.0){
        cout<<"you are overweight";
    }
    else if(BMI ==18.5 || BMI ==24.9){
        cout<<"you are healthy";
    }
    else if(BMI <18.5){
        cout<<"you are underweight";
    }
    



}
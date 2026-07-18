#include<iostream>
using namespace std;

void celsius(double celsius);
void fahrenheit(double fahrenheit);

int main(){
    double temp;
    char term;
    cout<<"enter the tempreature: ";
    cin>>temp;
    cout<<"select conversion in c or f"<<'\n';
    cin>>term;
    if(term == 'c'){
        celsius(temp);
    }
    else if(term == 'f'){
        fahrenheit(temp);

    }
    else{
        cout<<"enter valid input:";
    }

    return 0;
}

void celsius(double celsius){
     
    double output;
    output = celsius * 1.8 + 32;  
    cout << "Temperature in Fahrenheit: " << output << " °F";
}
     
void fahrenheit(double fahrenhiet){

    double value;
    value = (fahrenhiet - 32) /1.8;
    cout<<"tempreature in celsius : " << value << " °c";
}
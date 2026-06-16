#include<iostream>
#include<ctime>
int main(){

    int num;
    int guess;
    int tries=0;

    std::cout<<"Welcome to the Number Guessing Game!"<<std::endl;
    std::cout<<"I have selected a random number between 1 and 100. Can you guess it?"<<std::endl;
    srand(time(0));
    num = rand() %100+1;
    
    do{
        std::cout<<"Enter your guess: ";
        std::cin>>guess;
        tries++;

        if(guess>num){
            std::cout<<"Too high! Try again."<<std::endl;
        }
        else if(guess<num){
            std::cout<<"Too low! Try again."<<std::endl;
        }
        else{
            std::cout<<"Congratulations! You guessed the number in "<<tries<<" tries!"<<std::endl;
        }
    }while(guess!=num);

    return 0;
}
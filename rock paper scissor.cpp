#include<iostream>
#include<ctime>
#include<string>
using namespace std;

char playermove();
char computermove();
bool checkwin(char player,char computer);
int main(){
    cout<<"----------------------------------------"<<'\n';
    cout<<"WELCOME TO A GAME OF ROHSHAMBO "<<'\n';
    cout<<"----------------------------------------"<<'\n';
    while (true)
    {
        char player = playermove();

        if (player == 'Q')
        {
            cout << "\nThanks for playing!\n";
            break;
        }

        cout<<"you choose "<<'\n';
        if(player == 'R'){
            cout<<"ROCK"<<'\n';
        }
        else if(player == 'P'){
            cout<<"PAPER"<<'\n';
        }
        else if(player == 'S'){
            cout<<"SCISSOR"<<'\n';
        }
        
        char computer = computermove();
        cout<<"computer choose"<<'\n';
        if(computer == 'R'){
            cout<<"ROCK"<<'\n';
        }
        else if(computer == 'P'){
            cout<<"PAPER"<<'\n';
        }
        else if(computer == 'S'){
            cout<<"SCISSOR"<<'\n';
        }

        checkwin(player,computer);
    }
    return 0;
}
char playermove()
{
    char move;

    while (true)
    {
        cout << "\nChoose your move\n";
        cout << "R - Rock\n";
        cout << "P - Paper\n";
        cout << "S - Scissors\n";
        cout << "Q - Quit\n";

        cin >> move;

        move = toupper(move);

        if (move == 'R' || move == 'P' || move == 'S' || move == 'Q')
            return move;

        cout << "Invalid input. Try again.\n";
    }
}
char computermove(){
    int num;
    num = rand() %3;
    switch(num){
        case 0:
        return 'R';
        case 1:
        return 'P';
        case 2:
        return 'S';
    }
}
bool checkwin(char player,char computer){

    if (player == computer)
    {
        cout << "\nIt's a Tie!\n";
    }
    else if ((player == 'R' && computer == 'S') ||
             (player == 'P' && computer == 'R') ||
             (player == 'S' && computer == 'P'))
    {
        cout << " You Win!"<<'\n';
    }
    else
    {
        cout << "Computer Wins!"<<'\n';
    }
}
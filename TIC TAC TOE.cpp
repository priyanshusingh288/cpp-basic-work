#include<iostream>
#include<ctime>
using namespace std;

void drawboard(char *spaces);
void playermove(char *spaces,char player);
void computermove(char *spaces,char computer);
bool checkwin(char *spaces,char player,char computer);
bool checktie(char *spaces);

int main(){
    char spaces[] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    
    drawboard(spaces);
    while(running){
        playermove(spaces,player);
        drawboard(spaces);
        if(checkwin(spaces, player, computer)){
            running = false;
            break;
        }
        if(checktie(spaces)){
        running = false;
        break;
    }
     computermove(spaces,computer);
    drawboard(spaces);
    if(checkwin(spaces,player,computer)){
        running = false;
        break;
    }
    if(checktie(spaces)){
        running = false;
        break;
    }
    }
    cout<<"THANKS FOR PLAYING :)))";
    return 0;
    
}
void drawboard(char *spaces){
    cout << "\n";
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " \n";
    cout << "---|---|---\n";
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " \n";
    cout << "---|---|---\n";
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " \n";
    cout << "\n";
}
void playermove(char *spaces,char player){
    int move;
    do
    {
        cout<<"enter your move from 1 to 9"<<'\n';
        cin>>move;
        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"enter a valid move pls: ";
            continue;
        }
        move--;
        if(move >=0 && move < 9 && spaces[move] ==' '){
            spaces[move] = player;
            break;
        }
        else{
            cout<<"invalid move choose move between 1 to 9"<<'\n';
        }

    } while (true);
    
}
void computermove(char *spaces,char computer){
    int num;
    srand(time(0));

    while(true){
        num = rand() %9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}
bool checkwin(char *spaces,char player,char computer){
    /*this is for row combination checking*/
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout<<"YOU WIN"<<'\n':cout<<"YOU LOSE"<<'\n';
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? cout<<"YOU WIN"<<'\n' : cout<<"YOU LOSE"<<'\n';
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout<<"YOU WIN"<<'\n' : cout<<"YOU LOSE"<<'\n';
    }
    /*now i am going to wtite column combinaton and cross pattens*/
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout<<"YOU WIN"<<'\n':cout<<"YOU LOSE"<<'\n';
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[3] == spaces[7])){
        spaces[1] == player ? cout<<"You WIN"<<'\n' : cout<<"YOU LOSE"<<'\n';
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout<<"YOU WIN"<<'\n' : cout<<"YOU LOSE"<<'\n';
    }
    /*the digonal pattern here*/
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout<<"YOU WIN"<<'\n' : cout<<"you lose"<<'\n';
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout<<"YOU WIN"<<'\n' : cout<<"YOU LOSe"<<'\n';
    }
    else{
        return false;
    }
    return true;
}
bool checktie(char *spaces){
    for(int i =0 ; i < 9;i++){
        if(spaces[i] ==' '){
            return false;
        }
    }
    cout<<"its a tie!!!! match";
    return 0;
}
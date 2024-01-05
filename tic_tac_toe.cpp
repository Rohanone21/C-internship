#include<iostream>
#include<ctime>
using namespace std;
char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void show_board();
void get_x_player_choice();
void get_o_player_choice();
void get_computer_choice();
int count_board(char symbol);
char check_winner();
int main(){
int op;
int ch;
char symbol;
int count;
int result;
do{
cout<<" press 1 to enter player one choice"<<"\n";
cout<<" press 2 to enter player two choice"<<"\n";
cout<<" press 3 to show board"<<"\n";
cout<<" press 4 to count  symbol"<<"\n";
cout<<" press 5 to check winner  or Draw"<<"\n";
cin>>op;
switch(op){

case 1:
get_x_player_choice();
break;
case 2:
get_o_player_choice();
break;
case 3:
   show_board();
   break;
case 4:
    cout<<"Enter symbol to count"<<"\n";
     cin>>symbol;
    count=count_board(symbol);
    cout<<"count of symbol:  "<<symbol<<":"<<count<<"\n";
    break;
case 5:
result=check_winner();
if(result=='x'||result=='o'){
cout<<"Winner is:"<<"    "<<(char)result<<"   ";
}
else if(result=='D'){
cout<<"Draw"<<"\n";
}
else{
cout<<"Continue"<<"\n";
}
break;
default:
cout<<"Enter some another value"<<"\n";
}
cout<<"Do you want to continue"<<"\n";
cin>>ch;
}while(ch!=6);

}

void get_x_player_choice(){
while(true){
 int choice;
 cout<<"Enter the choice from(1-9)"<<"\n";
 cin>>choice;
 choice--;
 if(choice<0||choice>8){
cout<<"Enter choice between(1-9)"<<"\n";
 }
 else if(board[choice]!=' '){
cout<<"Enter some another position,this position is not empty"<<"\n";
 }
 else{
    board[choice]='x'; //
    break;

 }
}
}

void get_o_player_choice(){
while(true){
 int choice;
 cout<<"Enter the choice from(1-9)"<<"\n";
 cin>>choice;
 choice--;
 if(choice<0||choice>8){
cout<<"Enter choice between(1-9)"<<"\n";
 }
 else if(board[choice]!=' '){
cout<<"Enter some another position,this position is not empty"<<"\n";
 }
 else{
    board[choice]='o';
    break;

 }
}
}

int count_board(char symbol){
int total=0;
for(int i=0;i<9;i++){
if(board[i]==symbol)
total+=1;
}
return total;
}

char check_winner(){

if(count_board('x')==count_board('o')){
return'D';
}
if(board[0]==board[1]&&board[1]==board[2]&&board[0]!=' ')
return board[0];
if(board[3]==board[4]&&board[4]==board[5]&&board[3]!=' ')
return board[3];
if(board[6]==board[7]&&board[7]==board[8]&&board[6]!=' ')
return board[6];
if(board[0]==board[3]&&board[3]==board[6]&&board[0]!=' ')
return board[0];
if(board[1]==board[4]&&board[4]==board[7]&&board[1]!=' ')
return board[1];
if(board[2]==board[5]&&board[5]==board[8]&&board[2]!=' ')
return board[2];
if(board[0]==board[4]&&board[4]==board[8]&&board[0]!=' ')
return board[0];
if(board[2]==board[4]&&board[4]==board[6]&&board[2]!=' ')
return board[2];
else{
    return 'C';
}
}

void  show_board(){
cout<<"   "<<"    |   "<<"    |   "<<"   |  "<<endl;
cout<<"   "<<board[0]<<"   |  "<<board[1]<<"    |  "<<board[2]<<"   |  "<<endl;
cout<<"--------------------------------"<<endl;
cout<<"   "<<"    |   "<<"    |   "<<"   |  "<<endl;
cout<<"   "<<board[3]<<"   |  "<<board[4]<<"    |  "<<board[5]<<"   |  "<<endl;
cout<<"--------------------------------"<<endl;
cout<<"   "<<"    |   "<<"    |   "<<"   |  "<<endl;
cout<<"   "<<board[6]<<"   |  "<<board[7]<<"    |  "<<board[8]<<"   |  "<<endl;
}





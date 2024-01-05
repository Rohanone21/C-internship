#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class GuessGame{
public:
void Game(){
srand(static_cast<unsigned int>(time(0)));
int setnumber=rand()%100+1;
int guess;
int attempts=0;
 do{
cout<<"Enter the guessing No:-"<<"\n";
cin>>guess;

if(guess>setnumber){
cout<<"You Guess is To large,please retry"<<"\n";
}
else if(guess<setnumber){
cout<<"You Guess is To small,please retry"<<"\n";
}
else{
cout<<" congratulations!,You guessed it correctly in"<<" "<<attempts+1<<" "<<"Attempts"<<"\n";
}
attempts++;
 }while(guess!=setnumber);
}
};
int main(){
GuessGame obj;
obj.Game();
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Calculator{
public:
int add(int x,int y){
return(x+y);
}
int sub(int x,int y){
return(x-y);
}
int mult(int x,int y){
return(x*y);
}
float div(int x,int y){
return static_cast<float>(x)/y;
}



};
int main(){
   Calculator obj;
int x,y;
int ch;

 int op;
 cout<<"CALCULATOR PROGRAM :-"<<"\n";
 cout<<"Enter The first No"<<"\n";
 cin>>x;
 cout<<"Enter The Second No"<<"\n";
 cin>>y;
do{
 cout<<"Enter 1 for Additon of two no's is"<<"\n";
 cout<<"Enter 2 for substraction of two no's "<<"\n";
 cout<<"Enter  3 for multiplication of two no's"<<"\n";
 cout<<"Enter 4  for Division  of two no's"<<"\n";
 cin>>op;



  switch(op){
  case 1:
      cout<<"Addition of two no's:"<<obj.add(x,y)<<"\n";
      break;
  case 2:
     cout<<"substraction of two no's:"<<obj.sub(x,y)<<"\n";
      break;
  case 3:
    cout<<"multiplication of two no's:"<<obj.mult(x,y)<<"\n";
      break;

    case 4:
    cout<<"division of two no's:"<<obj.div(x,y)<<"\n";
      break;

    default:
    cout<<"None of the operation is selected:"<<"\n";
  }
   cout<<"Do you want to continue"<<"\n";
   cin>>ch;
}while(ch!=5);


}

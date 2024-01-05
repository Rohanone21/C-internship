#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class List{
public:
static const  int max_tasks=100;
static const int task_status=2;
 string Task[max_tasks][task_status];
int taskcount=0;
void AddTask(string& task){
if(taskcount<max_tasks){
Task[taskcount][0]=task;
Task[taskcount][1]="Pending";
taskcount++;
cout<<"Task added successfully"<<"\n";
}
else{
cout<<"Cannot Add the task"<<"\n";
}

}
void ViewTasks(){
if(taskcount<=0){
cout<<"No task are present"<<"\n";
}
else{
for(int i=0;i<taskcount;i++){
cout<<i+1<<" "<<"Task"<<" "<<Task[i][0]<<" "<<"Has status :"<<" "<<Task[i][1]<<"\n";
}
}
}


void completedTask(int taskindex){
if(taskcount<=0){
cout<<"Tasks are not added"<<"\n";
}
else{
cout<<"Completed task are"<<"\n";
Task[taskindex-1][1]="Completed";
cout<<Task[taskindex-1][0]<<" has status"<<" "<<Task[taskindex-1][1]<<" "<<"\n";
}
}

void Removetask(int taskindex){
    if(taskcount<=0){
cout<<"Tasks are not added"<<"\n";
}
else{
for(int i=(taskindex-1);i<taskcount;i++){
for(int j=0;j<task_status;j++){
Task[i][j]=Task[i+1][j];
}
}
taskcount--;
}
}
};
int main(){
List obj;
int op;
int ch;
int taskindex;
string task;
do{
cout<<"**************TO-DO List*******************"<<"\n";
cout<<"Enter 1 to Add task to List"<<"\n";
cout<<"Enter 2 to Show tasks in  List"<<"\n";
cout<<"Enter 3 to mark task compltete"<<"\n";
cout<<"Enter 4 to remove task from List"<<"\n";

cin>>op;

switch(op){

case 1:

 cout<<"Enter the Task"<<"\n";
 cin.ignore();
 getline(cin,task);
 obj.AddTask(task);
break;

case 2:
    obj.ViewTasks();
    break;
case 3:
cout<<"Enter the index of to mark it as completed"<<"\n";
cin.ignore();
cin>>taskindex;
obj.completedTask(taskindex);
    break;

case 4:
cout<<"Enter the index of to Remove"<<"\n";
cin.ignore();
cin>>taskindex;
obj.Removetask(taskindex);
    break;
}
 cout << "Press any key to continue...";
cin>>ch;
}while(ch!=5);

}


#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void banner();
void addtask();
struct ToDoList
{
    int TaskNumber{0};
    string task;
};

void showtask();
// void searchtask();
// void deletetask();
// void updatetask();
int id{0};
int main()
{
    system("cls");
    banner();
    while (true)
    {
    cout<<"1. Add Task"<<endl;
    cout<<"2. Show Task"<<endl;
    cout<<"3. Search Task"<<endl;
    cout<<"4. Delete Task"<<endl;
    cout<<"5. Upate Task"<<endl;
    int choice{0};
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
        {
    case 1:addtask();
        break;
    case 2:showtask();
        break;
    case 3://searchtask();
        break;
    case 4://deletetask();
        break;
    case 5://updatetask();
        break;
    default:
        break;
    }
    }
    return 0;
}
void banner(){
    cout<<"*************************************"<<endl;
    cout<<"            MY TODO LIST"<<endl;
    cout<<"*************************************"<<endl;
}
void addtask(){
    system("cls");
    banner();
    ToDoList todo;
     cout<<"Enter New Task:"<<endl;
     cin.get();
     getline(cin,todo.task);
     char save;
     cout<<"Save? (y/n) :";
     cin>>save;
     if(save=='y'){
      id++;
      ofstream fout; //creating an object
      fout.open("todoList.txt");   //openning the file
      fout<<"\n"<<id<<endl; //stroing or printing in file
      fout<<todo.task<<endl; //stroing the user input
      fout.close();
     }
      char more;
      cout<<"Add more Task? (y/n): ";
      cin>>more;
      if(more=='y'){
        addtask();
      }
        else 
        {
            system("cls");
            cout<<"*Added Successfully!*"<<endl;
        }
        system("cls");
}
 void showtask(){
        system("cls");
        banner();
        ToDoList todo;
        ifstream fin("todoList.txt"); //creatring the object and openning the file 
        cout<<"Task: "<<endl;

        while (!fin.eof()) //to run the loop the reading of the file gets ends
        {
         fin>>todo.TaskNumber;   
         fin.ignore();
         getline(fin,todo.task);
         if (todo.task!="")
         {
            cout<<todo.TaskNumber<<": "<<todo.task<<endl;
         }
         else
         {
            cout<<"Empty!..."<<endl;
         }
        }  
        fin.close();
        char exitShowtask;
        cout<<"Exit? (y/n): ";     
        cin>>exitShowtask;
        if(exitShowtask!='y'){
            showtask();
        }
        system("cls");
}

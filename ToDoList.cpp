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
int id{0};

void showtask();
int searchtask();
void deletetask();
// void updatetask();
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
    case 3:searchtask();
        break;
    case 4:deletetask();
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
     cin.ignore();
     getline(cin,todo.task);
     
     char save;
     cout<<"Save? (y/n) :";
     cin>>save;
     if(save=='y'){
      id++;
      ofstream fout; //creating an object
      fout.open("todoList.txt",ios::app);   //openning the file and appending it-'as the new data eneter will get stored one another below.
      fout<<"\n"<<id<<". "; //stroing or printing in file
      fout<<todo.task<<endl; //stroing the user input
      fout.close();
      
      cin.ignore();
      char more;
      cout<<"Add more Task? (y/n): ";
      cin>>more;
      if(more=='y'){
        system("cls");
        addtask();
      }
        else 
        {
            system("cls");
            cout<<"*Added Successfully!*"<<endl;
        }
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
        cin.ignore();
        cout<<"Exit? (y/n): ";     
        cin>>exitShowtask;
        if(exitShowtask!='y'){
            showtask();
        }
        system("cls");
}

int searchtask(){
    system("cls");
    int id;
    cout<<"Enter Task Id:";
    cin>>id;
    ToDoList todo;
    ifstream fin("todo.txt");
    while (!fin.eof())
    {
        fin>>todo.TaskNumber;
        fin.ignore();
        getline(fin,todo.task);
        if(todo.TaskNumber==id){
            system("cls");
            cout<<todo.TaskNumber<<": "<<todo.task<<endl;
            return id;
        }
    }
         system("cls");
        cout<<"Not found!"<<endl;
        return 0; //if nothing is found then it will return 0.
}

void deletetask(){
    system("cls");
    int id = searchtask();
    if(id !=0){
        char Delete;
        cout<<"Delete? (y/n)"<<endl;
        cin>>Delete;
        if (Delete=='y')
        {
            ofstream tempfile;
            tempfile.open("temp.txt");
            ifstream fin;
            fin.open("todo.txt");
            int index=1;
            while(!fin.eof()){
                
            }
        }       
    }
}

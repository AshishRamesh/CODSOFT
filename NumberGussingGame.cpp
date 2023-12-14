#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    string name;
    cout<<"********************************"<<endl;
    cout<<"WELCOME TO NUMBER GUESSING GAME "<<endl;
    cout<<"********************************\n"<<endl;
    cout<<"Enter the your name -- ";
    getline(cin,name);
    cout<<endl;
    srand(time(0));
    int Random_number=rand()%100+1;
    int userEntered{0},play_again{0};
    cout<<"Guess the Number between 1-100 which is there in My Mind"<<endl;
    while (Random_number!=userEntered)
    {
    cin>>userEntered;
        if (Random_number<userEntered)
        {
            cout<<"Gussed number is too HIGH"<<endl;
            cout<<"Try Again...."<<endl;
        }
        else if (Random_number>userEntered)
        {
            cout<<"Gussed number is too LOW"<<endl;
            cout<<"Try Again...."<<endl;
        }
        else {
            cout<<"Congratulation YOU have Guesed the Correct Number....."<<endl;
             }
        
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    cout<<"# CALCULATER #"<<endl;
    int repeat_operation{0};
    do{
    int arthimeric_operation{0},n{0};
    double number{0},addition{0},subtract{0},division{0},multiplication{1},denominator{0},numerator{0};
    cout<<"Enter the number to perform the arthimatic operation: 1-addition 2-subtraction 3-multiplication and 4-division "<<endl;
    cin>>arthimeric_operation;
    switch (arthimeric_operation)
    {
    case 1: system("cls");
     cout<<"*********ADDITION**********"<<endl;
     cout<<"Enter the number of values"<<endl;
    cin>>n;
    if (n<0)
    {
        cout<<"Invalid input, the numbers of values should not be negative "<<endl;
    }
        for (int i=0;i<n;i++)
        {
            cout<<"Enter value:"<<i+1<<endl;
            cin>>number;
            addition+=number;
        }
        cout<<"addition: "<<addition<<endl;
        break;
    case 2:system("cls"); 
    cout<<"*********SUBTRACTION**********"<<endl;
    cout<<"Enter the number of values"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Invalid input, the numbers of values should not be negative "<<endl;
    } 
    cout<<"Enter value:1"<<endl;
    cin>>subtract;
    for (int i=1;i<n;i++){
        cout<<"Enter value:"<<i+1<<endl;
        cin>>number;
        subtract-=number;
    }
    cout<<"Subtraction: "<<subtract<<endl;
    break;
    case 3:system("cls");
    cout<<"*********MULTIPLICATION**********"<<endl;
    cout<<"Enter the number of values"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Invalid input, the numbers of values should not be negative "<<endl;
    } 
    for (int i=0;i<n;i++){
        cout<<"Enter value:"<<i+1<<endl;
        cin>>number;
        multiplication*=number;
    }
    cout<<"Multiplication: "<<multiplication<<endl; 
    break;
    case 4:system("cls"); 
    cout<<"*********DIVISIONṣ**********"<<endl;
    cout<<"Enter the numerator and denominator value"<<endl;
    cin>>numerator>>denominator;
    try
    {
        if(denominator!=0){
            division=numerator/denominator;
            cout<<"Division: "<<division<<endl;
        }
        else throw(denominator);
    }
    catch(double denominator)
    {
        cout<<"The value of division is infinite because the value of denominator is: "<<denominator<<endl;
    }
    
    break;
    default : system("cls");
    cout<<"Invalid! input....."<<endl;
    break;
    }
    cout<<"Do you want to continue the operartion? \n Press 1(yes) or Any key(no/exit)"<<endl;
    cin>>repeat_operation;
    }while(repeat_operation==1);
    return 0;
}

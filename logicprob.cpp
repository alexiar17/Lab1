// This program demonstrate a compile error 

// Alexia Romero

#include<iostream>
using namespace std;

int main(){

    float firstNumber;
    float secondNumber;    

    cout<<"Enter the first number"<<endl;
    cout<<"Then hit enter"<<endl;
    cin>>firstNumber;


    cout<<"Enter the second number"<<endl;
    cout<<"Then hit enter"<<endl;
    cin>>secondNumber;

    cout<<endl<<"You input the numbers as "<<firstNumber<<" and "<<secondNumber<<endl;

    firstNumber = secondNumber;
    secondNumber = firstNumber;

    cout<<"After swapping the values of the two numbers are "<<firstNumber<<" and "<<secondNumber<<endl;

    return 0;


}

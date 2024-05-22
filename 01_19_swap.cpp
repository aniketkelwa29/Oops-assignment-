#include<iostream>
using namespace std; 


int main(){ 

int a,b,temp;

cout<<"Enter the value of a :- ";
cin>>a;
cout<<"Enter the value of b :- ";
cin>>b;

temp =a;
a=b;
b=temp;

cout<<"The value of a is :- "<<a<<endl;
cout<<"The value of b is :- "<<b<<endl;

    return 0 ;  
}
#include<iostream>
using namespace std; 


int main(){ 

int a;
int b;
cout<<"Enter the value of a :- ";
cin>>a;

cout<<"Enter the value of b :- ";
cin>>b;
int sum = (a+b)+(a*b);
int product =(a+b)*(a*b);
cout<<"The sum of the two numbers a and b is :- "<<sum<<endl;
cout<<"The product of the two numbers a and b is :- "<<product<<endl;
    
    return 0 ;  
}
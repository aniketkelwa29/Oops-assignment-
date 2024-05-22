#include<iostream>
using namespace std; 


int main(){ 

int length =12;
float breadth =32.54;

float result=length*breadth;
cout<<"The area of the rectngle before typecasting is :- "<<result<<endl;
cout<<"The area of the rectangle after typecasting is :- "<<int(result)<<endl;

    
    return 0 ;  
}
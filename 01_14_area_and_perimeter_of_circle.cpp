#include<iostream>
#include<cmath>
using namespace std; 


int main(){ 
 float radius ;
 float pi = 3.14;

 cout<<"Enter the radius of a circle :- ";
 cin>>radius;

 cout<<"The area of a circle is :- "<<pi*pow(radius,2)<<endl;
 cout<<" The perimeter of a circle is :- "<<2*pi*radius<<endl;

    return 0 ;  
}
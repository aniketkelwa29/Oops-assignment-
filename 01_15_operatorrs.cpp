#include<iostream>
using namespace std; 


int main(){ 

     int r ;
     cout<<" Enter a four digit number :- " ;
     cin>>r;
     
    
    float  k = ((((8+r)/3)%5)*5);

     cout<<"The value after all the caculation is :- "<<k<<endl;

    
    return 0 ;  
}
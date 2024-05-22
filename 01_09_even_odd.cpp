#include<iostream>
using namespace std; 

int check_even_odd(int a){
    if (a % 2 ==0){
        cout<<"A is an even number"<<endl;
    }
    if (a % 2 ==1){
        cout<<"A is an odd number"<<endl;
    }
    
}
int main(){ 
 
 int A ;
 cout<<"Enter the value of A :- ";
 cin>>A;

 check_even_odd(A);

    
    return 0 ;  
}
#include<iostream>
using namespace std; 


int main(){ 

float length,breadth;

cout<<"Enter the length of the rectangle  :- ";
cin>>length;
cout<<"Enter the breadth of the rectangle :- ";
cin>>breadth;

if (length == breadth){
    cout<<"It's an square "<<endl;
}
else{
    cout<<"It's an rectangle"<<endl;
}

    
    return 0 ;  
}
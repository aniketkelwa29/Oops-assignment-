#include<iostream>
using namespace std; 


int main(){ 

int ram,shyam,ghanshyam;

cout<<"Enter the age of Ram :- ";
cin>>ram;

cout<<"Enter the age of Ghanshyam :- ";
cin>>ghanshyam;

cout<<"Enter the age of Shyam :- ";
cin>>shyam;

if (ram > shyam){
    cout<<" Ram is older than shyam"<<endl;
   if (ram > ghanshyam){
        cout<<"Ram is older than both of them "<<endl;
    }
}
else  if (ghanshyam > shyam){
    cout<<" Ghanshyam is older than shyam"<<endl;
   if ( ghanshyam > ram){
        cout<<"Ghanshyam is older than both of them "<<endl;
    }
}   

else if (ram < shyam){
    cout<<" shyam is older than shyam"<<endl;
   if (shyam > ghanshyam){
        cout<<"shyam is older than both of them "<<endl;
    }
}
    return 0 ;  
}
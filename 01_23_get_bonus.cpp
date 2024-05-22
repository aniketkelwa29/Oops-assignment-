#include<iostream>
using namespace std; 


int main(){ 
int service_years ;
int salary;
cout<<"From how many years you are working in our company :- ";
cin>>service_years;

cout<<"& how much your salary is :- ";
cin>>salary;

if (service_years >= 5){
    salary = salary+salary*.05;
    cout<<"your salary with 5% bonus is :- "<<salary<<endl;
}
    else {
        cout<<" your salary is :- "<<salary;
    }
    return 0 ;  
}
#include <iostream>

using namespace std;

class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 3294.23;
    }
    Employee(){}
};
class Programmer : Employee
{
public:

    Programmer(int inpID){
        id =inpID;
    }


        int languagecode =9;

};

int main()
{
    
   Employee aniket , ansh ,anuj;

   aniket.id = 45532;
   aniket.salary=5743.97;
   ansh.id = 45632;
   ansh.salary= 1345.654;
   anuj.id = 45732;
   anuj.salary= 1445.686;

   cout<<"The id number of mr.Aniket is :-  "<<aniket.id<<endl;
   cout<<"The salary of mr.Aniket is :-  "<<aniket.salary<<endl;
   
   cout<<"The id number of mr.Ansh is :-  "<<ansh.id<<endl;
   cout<<"The salary of mr.Ansh is :-  "<<ansh.salary<<endl;

   cout<<"The id number of mr.Anuj is :-  "<<anuj.id<<endl;
   cout<<"The salary of mr.Anuj is :-  "<<anuj.salary<<endl;

Programmer skillf(12)  ; 

cout<< "the code of you're language is :-  "<<skillf.languagecode<<endl;

    return 0;
}
/*
Default visiblity mode is private
Public visiblity mode : in public mode the public members of the base class will be the public members of the derived class
private visiblity mode : in private mode the public members of the base class will be private members of the derived class
private members are never inherited;

*/
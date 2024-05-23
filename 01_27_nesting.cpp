

    //   oop's - classes and objects
    // c++ --> initially called  --> c with classesby strousstroup;
    // structures had limitation's
    //      -members are public
    //      -no methods
    //   classes --> structurres + more
    //   classes -->can have methods and properties
    //   classes --> can make few members as private & few as public
    //   structure's in c++ are already typedef ;
    // you can declare objects along with the class declaration like this :
    /*class Employee{
   class definition
    } aniket ,vikas , amit */

    // harry.salary =8000 (it does not make any sense if salary is private  )


      //Nesting of member function;

#include <iostream>
#include <string>

using namespace std;


class Binary
{
string s;
public:
    void read(void);
    void chk_bin();
    void ones_complement();
    void display();
};

void Binary ::read(void)
{
    cout << "Enter a binary number :- ";
    cin >> s;
}
void Binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void Binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Dispaying your number :- " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i)  ;
        
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    b.ones_complement();
    b.display();
    return 0;
}
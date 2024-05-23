#include <iostream>
using namespace std;

class Number
{
    int a;

public:
//when no copy constructor is foud the the complier provide its default copy constructor;

Number(){
    a=34;
}
 
    Number(int number)
    {
        a = number;
    }
    Number(Number &obj){
        cout<<"!! copy constructor called !!"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
     Number q(z);//copy constructor invoked;
     q.display();

//      Number z2= z;//copy constructor will invoke because we define the object in the same line  
//    z2.display();
    return 0;
}
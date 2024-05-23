#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; 
    /* private is used for those data which you don't wan't to 
give access to anyone other */
public:
    int d, e;

    void setData(int a1, int b1, int c1); //declaration
    void getData()
    {

        cout << "The value of a is :- " << a << endl;
        cout << "The value of b is :- " << b << endl;
        cout << "The value of c is :- " << c << endl;
        cout << "The value of d is :- " << d << endl;
        cout << "The value of e is :- " << e << endl;
    }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{

    Employee aniket;

    aniket.d = 45;
    aniket.e = 76;
    aniket.setData(4, 6, 3);
    aniket.getData();

    return 0;
}
#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void Setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that the  sumcomplex function  allows to access the private data of the complex class;
    friend Complex sumcomplex(Complex o1, Complex o2);
    void printnumber()
    {
        cout << "Your complex number is:- " << a << " + " << b << "i" << endl;
    }
};


Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.Setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex c1, c2, sum;

    c1.Setnumber(1, 4);
    c1.printnumber();
    c2.Setnumber(5, 8);
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}
/* Properties of friend function
1. Not in the scope of a class
2. since it is not in the scope of class it can't e called from the object of that class 
like :- 
c1.sumcomplex ()==invalid
3. can be invoked without the help of any object 
4. usually contants the object as arguments 
5. can be declared inside public and private section of the class 
6. it cannot access the members directly by  their names it need object_name.member_name 
*/
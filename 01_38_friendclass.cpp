#include <iostream>
using namespace std;

// forward declaration
class Complex;
class Calculator
{
public:
    
    int sumRealcomplex(Complex, Complex);
    int sumcompcomplex(Complex,Complex);
};

class Complex
{
    int a, b;
    //friend int Calculator ::sumRealcomplex(Complex o1, Complex o2);
friend class Calculator;
public:
    void Setnumber(int n1, int n2)
    {   
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
    int Calculator :: sumcompcomplex(Complex o1,Complex o2){
        return (o1.b + o2.b);
    }


int main()
{
    Complex d1, d2;
    d1.Setnumber(1, 4);
    d1.printnumber();
    d2.Setnumber(4, 7);
    d2.printnumber();

    Calculator calc;
    int res = calc.sumRealcomplex(d1, d2);
    cout << "The sum of the real part of d1 and d2 is " << res << endl;
    int r = calc.sumcompcomplex(d1, d2);
    cout << "The sum of the real part of d1 and d2 is " << r << "i"<< endl;

    return 0;
}
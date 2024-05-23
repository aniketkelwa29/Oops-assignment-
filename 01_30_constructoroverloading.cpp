#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    
    Complex()
    {
         
        a = 1;
        b = 4;
    }
    void display()
    {
        cout << "The complex number is :- " << a << " + " << b << "i" << endl;
    }
};
// Complex ::  Complex(int a, int b);
int main()
{
    Complex c1(2, 9);
               
    c1.display();
        
    Complex c2(3);
      
    c2.display();
    
    Complex c3;

    c3.display();
   

    return 0;
}
#include <iostream>
using namespace std;

class Constructor
{
    int a, b;

public:
    /* creating a constructor
    constructor is a special member function with the same name as the class
   class.
    it is used to initialize the objects of its class
    it is automatically invoked whenever an object is created */
    Constructor(void);
    // constructor declaration;
    void printNumber()
    {
        cout << " Your number is " << a << " + " << b << "i" << endl;
    }
};
Constructor ::Constructor(void) // -->it is a default constructor because it takes no any parameters ;

{


    a, b;
    cout << "Enter the value of a :- ";
    cin >> a;
    cout << "Enter the value of b :- ";
    cin >> b;
}

int main()
{

    Constructor c;
    c.printNumber();

    return 0;
}
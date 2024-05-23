#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
/*here we set the default argument which is  b =79 due to this if we have set the value and 
if we not set that value then it will print the default value 79*/

    Simple(int a, int b = 79)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void Simple ::printdata()
{
    cout << "The value of data1 and data2 is :- " << data1 << " and " << data2 << endl;
}
int main()
{

    Simple s(21);
    s.printdata();

    return 0;
}
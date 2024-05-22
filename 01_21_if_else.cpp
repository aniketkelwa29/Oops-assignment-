#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter the value of a :- ";
    cin >> a;

    cout << "Enter the value of b :- ";
    cin >> b;

    if (a > b)
    {
        cout << "A is greater than B which is :- " << a << endl;
    }
    else if (b > a)
    {
        cout << "B is greater than A which is :- " << b << endl;
    }
    return 0;
}
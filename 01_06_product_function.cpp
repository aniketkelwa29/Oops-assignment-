#include <iostream>
using namespace std;

int Product(int a, int b)
{

    return a * b;
}
int main()
{

    int x, y;
    cout << "Enter the value of x :-";
    cin >> x;
    cout << "Enter the value of y :-";
    cin >> y;

    cout<<"The sum of the two numbers is :- "<<Product(x,y)<<endl;

    return 0;
}
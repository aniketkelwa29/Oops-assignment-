#include <iostream>
using namespace std;

void compare(int a, int b, int c)
{

    if (a > b && a > c)
    {
        cout << "a is the maximum value in the comparison of b and c" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "b is the maximum value in the comparison of a and c" << endl;
    }
    else if (c > a && c > b)
    {
        cout << "c is the maximum value in the comparison of a and b" << endl;
    }
}
int main()
{

    int q, w, e;
    cout << "Enter the value of q :- ";
    cin >> q;

    cout << "Enter the value of w :- ";
    cin >> w;

    cout << "Enter the value of e :- ";
    cin >> e;

    compare(q, w, e);

    return 0;
}
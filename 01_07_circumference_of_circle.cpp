#include <iostream>
using namespace std;

float Circumference_of_circle(int r, float pi=3.14)
{

    return 2*pi*r;
}
int main()
{

    int x ;
    cout << "Enter the value of x :-";
    cin >> x;

    cout<<"The circumference of the circle is :- "<<Circumference_of_circle(x)<<endl;

    return 0;
}
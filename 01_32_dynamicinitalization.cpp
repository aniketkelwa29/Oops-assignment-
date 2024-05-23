#include <iostream>
using namespace std;

class Bankdeposit
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int R);
    void show();
};
Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

Bankdeposit ::Bankdeposit(int a, int b, int c)
{
    principle = a;
    years = b;
    interestrate = float(c) / 100;
    returnvalue = principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue *= (1 + interestrate);
    }
}

void Bankdeposit ::show()
{
    cout << "The principle amount was " << principle << endl
         << "Returns the amount after " << years << " years is:- " << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the  principle amount :- ";
    cin >> p;
    cout << "Enter For how many years you've invested:- ";
    cin >> y;
    cout << "Enter the intrest rate :- ";
    cin >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the  principle amount :- ";
    cin >> p;
    cout << "Enter For how many years you've invested:- ";
    cin >> y;
    cout << "Enter the intrest rate :- ";
    cin >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}

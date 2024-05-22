#include <iostream>
using namespace std;

int main()
{

    for (int a = 5; a > 0; a--)
    {
        for (int b = 122; b > a; b--)
        {
            cout << " ";
            b--;
        }
        for (int c = a ; c > 0; c--)
        {
            cout << "*";
        }

        cout << "\n";
        a--;
    }
    
    for (int i = 2; i < 6; i++)
    {
        for (int k = 122; k > i; k--)
        {
            cout << " ";
            k--;
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
         }
        cout << "\n";
        i++;
    }
    return 0;
 }
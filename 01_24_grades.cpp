#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter the marks you scored in the last exam :- ";
    cin >> marks;

    if (marks <= 100 && marks >= 80)
    {
        cout << " || You're an A grade student ||" << endl;
    }

   else  if (marks < 80 && marks >= 60)
    {
        cout << " || You're an B grade student ||" << endl;
    }
    else if (marks < 60 && marks >= 50)
    {
        cout << " || You're an C grade student ||" << endl;
    }
    else if (marks < 50 && marks > 40)
    {
        cout << " || You're an D grade student ||" << endl;
    }
   else if (marks < 45 && marks >= 25)
    {
        cout << " || You're an E grade student ||" << endl;
    }
    else
    {
        cout << " || you've failed in the last exam || " << endl;
    }

    return 0;
}
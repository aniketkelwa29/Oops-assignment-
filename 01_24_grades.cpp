#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter the marks you scored in the last exam :- ";
    cin >> marks;

    if (marks <= 100 && marks >= 80)
    {
        cout << " || Your grade is A ||" << endl;
    }

   else  if (marks < 80 && marks >= 60)
    {
        cout << " || Your grade is B ||" << endl;
    }
    else if (marks < 60 && marks >= 50)
    {
        cout << " || Your grade is C ||" << endl;
    }
    else if (marks < 50 && marks > 40)
    {
        cout << " || Your grade is D ||" << endl;
    }
   else if (marks < 45 && marks >= 25)
    {
        cout << " || Your  grade is E ||" << endl;
    }
    else
    {
        cout << " || you've failed in the last exam || " << endl;
    }

    return 0;
}

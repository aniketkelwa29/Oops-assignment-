#include <iostream>
using namespace std;

int main()
{
    int sandwitch = 60, manchuriyan = 90, noodels = 50;
    int price;
    int quantity;
    cout << " Enter the Quantity of food which you want :- ";
    cin >> quantity;

    cout << "Here's the menu :- " << endl;
    cout << "Sandwitch :-" << sandwitch << endl;
    cout << "manchuriyan :- " << manchuriyan << endl;
    cout << "noodels :- " << noodels << endl;

    string s;
    cout << "Enter the name of the fast-food Which you want to eat :- ";
    cin >> s;

    if (s == "sandwitch")
    {
        price = quantity * sandwitch;
        cout << "The bill of the sandwitch is :- " << price <<endl;
    }

    else if (s == "manchuriyan")
    {
        price = quantity * manchuriyan;
        cout << "The bill of the machuriyan is :- " << price<<endl;
    }
    else if (s == "noodels")
    {
        price = quantity * noodels;
        cout << "The bill of the noodels is :- " << price<<endl;
    }

    if (price >= 1000){
        price = (price)-price*.1;
        cout<<"sir you'r bill with discount is :- "<<price<<endl;
    }
    else{
        cout<<"Sir here is you're bill :- "<<price<<endl;
    }

    return 0;
}
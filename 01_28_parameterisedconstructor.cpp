#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:

    Point(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        if (x < 0 && y > 0)
        {
            cout << "The point lies in 2'nd quardrant  :- (" << x << "," << y << ")" << endl;
        }
        else if (x > 0 && y > 0)
        {
            cout << "The points lies on 1'st quardrant :- (" << x << "," << y << ")" << endl;
        }
        else if (x > 0 && y < 0)
        {
            cout << "The points lies on 4'th quardrant :- (" << x << "," << y << ")" << endl;
        }
        else
        {
            cout << "The points lies on 3'rd quardrant :- (" << x << "," << y << ")" << endl;
        }
    }
};

int main()
{
    Point p(-57,-234);
    p.display();
    Point q(45,563);
    q.display();
    return 0;
}
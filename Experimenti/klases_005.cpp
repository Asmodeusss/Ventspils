#include <iostream>

using namespace std;

// Define a simple class named "base"
class base
{
    int x,y,z;
public:
/// Default constructor, using member initialization. At this point its basically black magic.
    base(int a1, int a2, int a3) :  x(a1), y(a2), z(a3) {}
    int getx(){return x;}
    int gety(){return y;}
    int getz(){return z;}
};


int main()
{

    base obj1(10, 5, -10);
    cout << obj1.getx() << endl;
    cout << obj1.gety() << endl;
    cout << obj1.getz() << endl;

    return 0;
}

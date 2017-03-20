#include <iostream>

using namespace std;

// Define a simple class named "base"
class base
{
    int x;
public:
// Default constructor.
    base(int a) :  x(a) {}
    int getx(){return x;}
};


int main()
{
    // create pointer that can point to "base" class objects
    base * ptr;

    base obj1(10);
    ptr = &obj1;
    cout << ptr->getx() << endl;

    return 0;
}

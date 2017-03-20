#include <iostream>

using namespace std;


// Define a simple class named "base"
class base
{
    int x, y;
public:
// Default constructor
    base()
    {
        x=5;
        y=5;
    }
// Overloaded constructor 1
    base(int a, int b)
    {
        x = a;
        y = b;
    }
// Overloaded constructor 2
    base(int a)
    {
        x = a;
        y = a;
    }
    int test(){return x*y;}
};


int main()
{

// Object created using default constructor.
    base obj1;
// object created using overloaded constructor 1.
    base obj2(10,10);
// object created using overloaded constructor 2.
    base obj3(7);

//Notice how obj's x and y are never explicitly stated. They are set when the constructor is executed.
    cout << "Obj1: " << obj1.test() << endl;
    cout << "Obj2: " << obj2.test() << endl;
    cout << "Obj3: " << obj3.test();

    return 0;
}

#include <iostream>

using namespace std;


// Define a simple class named "base"
class base
{
    int x, y;
public:
// The base constructor
    base()
    {
        x=5;
        y=5;
    }

// Here we create an alternative to the constructor. This can
    base(int a, int b)
    {
        x = a;
        y = b;
    }
    int test(){return x*y;}
};


int main()
{

//object is created without parenthesis(These -> "()") and thus default constructor is called. This means x and y are 5;
    base obj1;
// We create object using parenthesis and thus the alternative constructor.
    base obj2(10,10);

//Notice how obj's x and y are never explicitly stated. They are set when the constructor is executed.
    cout << "Obj1: " << obj1.test() << endl;
    cout << "Obj2: " << obj2.test();

    return 0;
}

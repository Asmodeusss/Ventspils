#include <iostream>

using namespace std;


// Define a simple class named "base"
class base
{
    int x, y;
public:
// This is a DEFAULT CONSTRUCTOR. It is executed when ever a class object is created.
    base()
    {
        x=5;
        y=5;
    }
    int test(){return x*y;}
};


int main()
{

    base obj;

//Notice how obj's x and y are never explicitly stated. They are set when the constructor is executed.
    cout << obj.test();

    return 0;
}

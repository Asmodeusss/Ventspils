#include <iostream>

using namespace std;


// Define a simple class named "base"
class base
{
// These variables are protected. They cannot be accessed from outside the class
    int x, y;
//The "public:" bit indicates that this stuff can be accessed from the outside.
public:
//A class can have its own functions
    int test(){return x*y;}
    void setx(int a) {x=a;}
    void sety(int a) {y=a;}
};


int main()
{

    base obj;
    obj.setx(10);
    obj.sety(10);

    cout << obj.test();

    return 0;
}

#include <iostream>

using namespace std;


// Define a simple class named "base"
class base
{
    int x, y;
public:
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

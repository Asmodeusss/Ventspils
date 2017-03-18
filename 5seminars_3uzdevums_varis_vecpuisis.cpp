#include <iostream>
#include <vector>

using namespace std;

// this function raises an integer to a power
int power(int a, int n){
	int rez=1;
	for (int i = 0; i < n; i++){
		rez = rez*a;
	}
	return rez;
}


// this function will output the requested m[i]*(x^(n-i)) result
int funkcija(int m[], int n, int x)
{
    int rez=0;
	for (int i = 0; i < n; i++)
	{
        rez+=m[i]*(power(x,n-i));
	}

	return rez;
}

int main()
{
    //Both arrays are defined here
    int m1[]={3, 2, -5, -1, 7, -6};
    int m2[]={4,-5,1,-1,-12};
    int x;
    //actual test happens here
    cout << "Enter number for first calculation: ";
    cin >> x;
    cout << funkcija(m1,6,x) << endl;
    cout << "Enter number for second calculation: ";
    cin >> x;
    cout << funkcija(m2,5,x) << endl;



	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a = 10;
	int* ptr = &a;

	cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value at ptr: " << *ptr << endl; 

    *ptr = 20; // changes a via pointer

	cout << "Updated value of a: " << a << endl;
	
    return 0;
}
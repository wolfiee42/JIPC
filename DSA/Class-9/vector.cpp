#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;

	vector<int> numbers;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		numbers.push_back(x);
	}

	for(int i=0;i<n;i++)
	{
		cout << numbers.at(i) << " ";
	}

	cout << endl;
	cout<< "first element: " << numbers.front() << endl;
	cout << "last element: " << numbers.back() << endl;
	cout << "vector size: " << numbers.size() <<endl;
	cout << "vector capacity: " << numbers.capacity() <<endl;

	numbers.pop_back();
	cout << "updated numbers size: "<< numbers.size() << endl;
	for(int i=0; i<n-1; i++) cout << numbers.at(i) << " ";

    return 0;
}
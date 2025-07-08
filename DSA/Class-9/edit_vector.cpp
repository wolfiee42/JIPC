#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin>>n;
	vector<int> v;

	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	v.insert(v.begin()+2, 99);
	v.erase(v.begin()+3);

	for(auto x:v) cout << x << " ";

	cout << endl;
	cout << "before shrink size: " << v.size() <<endl;
	cout << "before shrink capacity: " << v.capacity() <<endl;
	v.shrink_to_fit();

	v.clear();	v.shrink_to_fit();
	cout << "after shrink size: " << v.size() <<endl;
	cout << "after shrink capacity: " << v.capacity() <<endl;
	return 0;
}
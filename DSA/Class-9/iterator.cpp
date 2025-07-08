#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	vector<int> v;

	for(int i=0; i<n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	int x; cin >> x;

	for(auto it = v.begin(); it != v.end(); it++)
	{
		if(*it > x) cout << *it << " ";
	}

    return 0;
}
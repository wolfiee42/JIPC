#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	vector<int> arr;

	for(int i=0; i<n; i++){
		int x; cin >> x;
		arr.push_back(x);
	}

	int mid; cin >> mid;

	rotate(arr.begin(), arr.begin()+mid ,arr.end());
	for(auto x:arr) cout<< x << " ";
	cout << endl;

	rotate(arr.begin(), arr.end()-1, arr.end());
	for(auto x:arr) cout<< x << " ";

    return 0;
}
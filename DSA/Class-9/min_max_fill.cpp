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

	cout << *min_element(arr.begin(), arr.end()) << endl;
	cout << *max_element(arr.begin(), arr.end()) << endl;
	fill(arr.begin(), arr.end(), -1);
	for(int x:arr) cout << x << " "; 
    return 0;
}
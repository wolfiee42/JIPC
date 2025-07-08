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

	int target; cin >> target;

	auto it = find(arr.begin(), arr.end(), target);
	if(it != arr.end()) cout << "Target Found at index: " << it - arr.begin();
	else cout << "Not found";

	cout << endl;

	int cnt = count(arr.begin(), arr.end(), target);
	cout << cnt;
    return 0;
}
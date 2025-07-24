#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	int k; cin >> k;

	int newArr[n];
	for(int i=0; i<n; i++)
	{
		int idx = (i+n-k)%n;
		newArr[idx] = arr[i];
	}
	for (int i = 0; i < n; i++) cout << newArr[i] << " ";

  return 0;
}
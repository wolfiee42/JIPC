#include <bits/stdc++.h>
using namespace std;

void reverse(int * arr, int a, int b)
{
	while(a<b)
	{
		swap(arr[a], arr[b]);
		a++;
		b--;
	}
}

void print(int * arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
}

int main ()
{
	int n; cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	int k; cin >> k;

	reverse(arr, 0, k-1);
	reverse(arr, k, n-1);
	reverse(arr, 0, n-1);

	print(arr, n);


    return 0;
}
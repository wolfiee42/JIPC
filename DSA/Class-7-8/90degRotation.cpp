#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[n][n];
	for(int i=0; i<n ; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<n ; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}

	for(int k=0;k<n;k++)
	{
		int i=0;
		int j=n-1;
		while(i<j)
		{
			swap(arr[k][i], arr[k][j]);
			i++;j--;
		}
	}

	for(int i=0; i<n ; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


    return 0;
}
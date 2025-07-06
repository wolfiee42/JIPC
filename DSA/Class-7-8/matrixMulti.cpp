#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m, p;
	cin >> n >> m;
	int arr1[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin >> arr1[i][j];
		}
	}

	cin >> m >> p;
	int arr2[m][p];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<p; j++)
		{
			cin >> arr2[i][j];
		}
	}

	int arr3[n][p];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			int sum = 0;
			for(int k=0; k<m; k++)
			{
				sum += arr1[i][k]*arr2[k][j];
			}
			arr3[i][j] = sum;
		}
	}


	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}
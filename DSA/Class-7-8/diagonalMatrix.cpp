#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0 ;j<n; j++)
		{
			cin >> arr[i][j];
		}
	}

	int primarySum = 0;
	int secodarySum = 0;

	//primary diagonal -> top left to bottom right
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i == j)
			{
				primarySum += arr[i][j];
			}
		}
	}

	// secodary diagonal -> bottom left to top right
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i+j == n -1)
			{
				secodarySum += arr[i][j];
			}
		}
	}



	cout << primarySum << " " << secodarySum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;
	int mat[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> mat[i][j];

	int target; cin >>target;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat[i][j]== target)
			{
				flag =true;
				break;
			}
			
		}
	}

	if(flag)
	{
		cout << "will not take number";
	}
	else 
	{
		cout << "doesn't exist";
	}
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >>n;
	stack<int> st;
	for(int i=0; i<n; i++)
	{
		string x; cin>>x;
		if(x == "push")
		{
			int y; cin >> y;
			st.push(y);
		} 
		else if (x == "top")
		{
			cout << st.top() << endl;
		}
		else if(x == "pop")
		{
			st.pop();
		}
	}
    return 0;
}
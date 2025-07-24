#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b;
	cin >> a >> b;

	string word; cin >> word;

	for(int i=0; i< b;i++)
	{
		string s; cin >> s;

		if(s == "substr")
		{
			int x, y; cin >> x >> y;
			if(x>y)
			{
				int temp;
				temp =x;
				x=y;
				y=temp;
			}
			cout << word.substr(x-1, y-x+1) << endl;
		} 
		else if(s == "sort")
		{
			int x, y; cin >> x >> y;
			if(x>y)
			{
				int temp;
				temp =x;
				x=y;
				y=temp;
			}
			sort(word.begin()+x-1, word.begin()+y);
		} 
		else if(s == "pop_back")
		{
			word.pop_back();
		}
		else if(s == "back")
		{
			cout << word.back() << endl;
		}
		else if(s == "reverse")
		{
			int x, y; cin >> x >> y;
			if(x>y)
			{
				int temp;
				temp =x;
				x=y;
				y=temp;
			}
			reverse(word.begin()+x-1, word.begin()+y);
		}
		else if(s == "front")
		{
			cout << word.front() << endl;
		}
		else if(s == "push_back")
		{
			char i; cin >> i;
			word.push_back(i);
		}
		else if(s == "print")
		{
			int x; cin >> x;
			cout << word[x-1] <<endl;
		}
	}

    return 0;
}
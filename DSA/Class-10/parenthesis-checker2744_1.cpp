#include <bits/stdc++.h>
using namespace std;

int main ()
{
		string k; cin >> k;
	  stack<char> st;
       for(auto c:k)
       {
            if(c == '(' || c == '{' || c == '[' )
            {
                st.push(c);
            } 
            else if(c == ')' || c == '}' || c == ']')
            {
                if( c ==  ')' && st.top() =='(' ) 
                {
                    st.pop();
                }
                else if(c == '}' && st.top() == '{')
                {
                	   st.pop();
                }
                else if (c== ']' && st.top() == '[')
                {
                	   st.pop();
                }
                else
                {
                    st.push(c);    
                }
            }
       }
       
       cout << st.top() << endl;

       if(st.empty())
       {
           cout << "valid";
       } 
       else 
       {
           cout << "invalid";
       }
  return 0;
}
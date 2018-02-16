#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	
    stack<char>st;
	string s;
	int i,count = 0;
    int t;
    cin>>t;
    
    while(t--)
    {
         cin>>s;
         count = 0;
        for(i = 0; i < s.length(); i++)
        {
    	   /* if(!st.empty() && s[i] == '(' && s[i+1] == '(')
    	    {
    	       count = 0;
                //st.push(s[i]);
		       while(!st.empty())	
		          st.pop();
		     }*/ 
		    if(s[i] == '(')
    	       st.push(s[i]);  
           
    	   else 
    	   {
               if(st.empty())
                   continue;
               else
               {
                   if(st.top() == '(')
                   {
                      st.pop();
                      count++;  
                   }
                  
               }
                
		    }
		   // cout<<"562";
	    }
    while(!st.empty())
        st.pop();
	cout<<count*2<<endl;;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


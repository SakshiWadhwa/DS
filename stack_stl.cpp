#include<iostream>
#include<stack>
using namespace std;

int main( void )
{
	int i;
	
	stack<int>s;
	
	for(i = 0; i < 10; i++)
	    s.push(i);
	    
	while(!s.empty())
	{
		cout<<"popped: "<<s.top()<<endl;
		s.pop();
	}
	
}

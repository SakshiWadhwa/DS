#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
vector<int>::iterator it;
	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
 it=adjacent_find(v.begin(),v.end());
	cout<<*it;
}

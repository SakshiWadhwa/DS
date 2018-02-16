#include<map>
#include<utility>
#include<iostream>
using namespace std;
int main()
{
map<string,int>m;
m.insert(pair<string,int>("abc",123));
m.insert(pair<string,int>("xyz",30));
m.insert(pair<string,int>("jkl",50));
map<string,int>::iterator itr;
cout<<m.lower_bound("xyz")->second<<endl;
for(itr=m.begin();itr!=m.end();itr++)
{
	cout<<itr->first<<" ";
	cout<<itr->second<<endl;
}
}

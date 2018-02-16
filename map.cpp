#include<map>
#include<iostream>
using namespace std;
int main()
{

map<int,int>m;
m.insert(pair<int,int>(2,40));
m.insert(pair<int,int>(1,30));
m.insert(pair<int,int>(4,50));
map<int,int>::iterator itr;
//m.erase(2);
cout<<m.lower_bound(2)->second<<endl;
for(itr=m.begin();itr!=m.end();itr++)
{
	cout<<itr->first<<" ";
	cout<<itr->second<<endl;
}

}

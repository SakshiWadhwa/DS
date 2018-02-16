#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>v;
	vector<int>::iterator it;
	v.push_back(15);
	v.push_back(20);
	v.push_back(10);
//	push_heap(v.begin(),v.end()); //----for push
	
/*	v.front();     ----for pop
	pop_heap(v.begin(),v.end());
	v.pop_back();
*/
make_heap(v.begin(),v.end());

	v.push_back(30);
		push_heap(v.begin(),v.end()); //enters at original position in heap.
		
		v.front();     //----for pop
	pop_heap(v.begin(),v.end());
	v.pop_back();
	
	sort_heap(v.begin(),v.end()); //---for sort	
		
	for(it=v.begin();it!=v.end();it++)
 {
 	cout<<*it<<" ";
 }
 } 

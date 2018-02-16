#include <iostream>
#include<algorithm>
using namespace std;

int divide(int a[], int left, int right, int k)
{
    int pivot = a[right];
    int i = left - 1;
    int j = left;
    
    for(j = left; j < right; j++)
    {
        if(a[j] <= pivot)
        {
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    i++;
    int t = a[right];
    a[right] = a[i];
    a[i] = t;
    return i;
    
}

void quicksort(int a[], int beg, int end, int k)
{
    if(beg < end)
    {
        int p = divide(a, beg, end, k);
        cout<<"p: "<<p<<" ";;
        quicksort(a, beg, p-1, k);
        quicksort(a, p+1, end, k);
    }
    
}


int main() {
    int n,i,k,j;
    cin>>n>>k;
    int a[n];
    for(i = 0; i < n; i++)
        cin>>a[i];
    
    quicksort(a, 0 , n-1, k);
    
   // for(i = 0; i < n; i++)
     //   cout<<a[i]<<" ";
    
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
return 0;
}

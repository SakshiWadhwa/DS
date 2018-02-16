#include<iostream>
using namespace std;

long count_merge(int a[], int l,int m, int r)
    {
    int n1 = m-l+1;
    int n2 = r-m;
    long count=0;
    int i,j,k,a1[n1],a2[n2];
    
    for(i=0;i<n1;i++)
        a1[i]=a[i+l];
        
    for(j=0;j<n2;j++)
        a2[j]=a[j+m+1];
    
    i=0;j=0;k=l;
    
    while(i<n1 && j<n2)
        {
        if(a1[i]<=a2[j])
            a[k++]=a1[i++];
        else
           {
            a[k++]=a2[j++];
            count+=m+1-i-l;
        }
    }
    while(i<n1)
        a[k++]=a1[i++];
        
    while(j<n2)
        a[k++]=a2[j++];
    

       return count;
}

long long count_inversions(int a[],int left, int right) {
	
    long count=0;
    
    if(left<right)
        {
        int m=(left+right)/2;
        count+=count_inversions(a,left,m);
        count+=count_inversions(a,m+1,right);
        count+=count_merge(a,left,m,right);
    }
    
  return count;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int arr[n];
        for(int arr_i = 0;arr_i < n;arr_i++){
           cin >> arr[arr_i];
        }
        cout << count_inversions(arr,0,n-1) << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

 static int k = 0;

int count_grid(int a[1000][1000], int i, int j, int n, int m)
{
    if((i < 0)  || (i >= n) || (j < 0 || j >= n) )
    {
        return 0;
    }
    if(a[i][j] == 0)
        return 0;
    k = 1;
    a[i][j] = 0;
    
    k += count_grid(a, i-1, j-1, n, m);
    k += count_grid(a, i-1, j, n, m);
    k += count_grid(a, i-1, j+1, n, m);
    k += count_grid(a, i, j-1, n, m);
    k += count_grid(a, i, j+1, n, m);
    k += count_grid(a, i+1, j-1, n, m);
    k += count_grid(a, i+1, j, n, m);
    k += count_grid(a, i+1, j+1, n, m);
    cout<<k<<" ";
    return k;   
}
int main() {
    int n,m,count = 0,small = 0,t = 0;
    cout<<"enter n m";
    cin>>n>>m;
    int i,j;
    int a[1000][1000];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
           if(a[i][j] == 1)
           {
               count = count_grid(a,i,j,n,m);
               t++;
               if(small < count)
                   small = count;
           }
        }
    }
   // cout<<"t: "<<t<<" "<<small;
    return 0;
}


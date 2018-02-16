#include<stdio.h>

int merge_sort(int left, int m, int right, int a[], int n);

int merge_call(int left, int right, int a[], int n)
{
    if( left < right )
    {
        int m = (left + right) / 2;             //find middle element
        merge_call(left, m, a, n);                 //left part of array (before mid)
        merge_call(m + 1, right, a, n);            //to move to right part of array (after mid)
        merge_sort(left, m, right, a, n);
    }
}

int merge_sort(int left, int m, int right, int a[], int n)
{
    int i = left, j = m + 1, k = 0, b[n];
    while( i <= m && j <= right)
    {
        if(a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    
    while(i <= m)
    {
        b[k++] = a[i++];
    }
    
    while(j <= right)
    {
        b[k++] = a[j++];
    }
    k=0;
    for(int i = left; i <= right; i++)
    {
        a[i] = b[k++];
    }
}

int main(void) {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    
    int i;
    for( i = 0; i < n; i++ )
    {
        scanf("%d", &a[i]);
    }
    
    merge_call(0, n-1, a, n);
    
    for( i = 0; i < n; i++ )
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}


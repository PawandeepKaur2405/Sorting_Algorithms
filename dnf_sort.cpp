#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int n, int x, int y)
{
    a[x] ^= a[y];
    a[y] ^= a[x];
    a[x] ^= a[y];
}
void dnfSort(int a[], int n)
{
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(mid != high)
    {
        if(a[mid] == 0)
        {
            swap(a,n,mid,low);
            low++;
            mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else if(a[mid] == 2)
        {
            swap(a,n,mid,high);
            high--;
        }
    }
}

int main()
{
    int a[] = {1,0,2,1,0,1,2,1,2};

    dnfSort(a,9);

    for(int i=0 ; i<9 ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
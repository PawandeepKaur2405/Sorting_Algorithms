#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int x, int y)
{
    a[x] ^= a[y];
    a[y] ^= a[x];
    a[x] ^= a[y];
}

void waveSort(int a[], int n)
{
    for(int i=1 ; i<n ; i+=2)
    {
            if(a[i] > a[i-1])
            {
                swap(a,i,i-1);
            }
            if(a[i+1] < a[i] && i<=n-2)
            {
                swap(a,i,i+1);
            }

    }
}
int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    waveSort(a,n);

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
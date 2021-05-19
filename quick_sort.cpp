#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Partition(int a[], int l, int r)
{
    int i=l-1;
    int pi=a[r];

    for(int j=l ; j<r ; j++)
    {
        if(a[j] < pi)
        {
             i++;
             swap(&a[i],&a[j]);
        }
    }

    swap(&a[i+1],&a[r]);
    return i+1;

}

void quickSort(int a[], int l, int r)
{
    if(l < r)
    {
        int pi = Partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
    }

    quickSort(a,0,n-1);

    for(int i=0; i<n ;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int beg,int end, int mid)
{
    
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int a[n1];
    int b[n2];  //temp arrays

    for(int i=0 ; i<n1 ; i++)
    {
        a[i] = arr[beg+i];
    }

    for(int i=0 ; i<n2 ; i++)
    {
        b[i] = arr[mid+i+1];
    }

    int i = 0;
    int j = 0;
    int k = beg;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i]; 
            i++; 
        }
        else
        {
            arr[k] = b[j];
            j++;
        }

        k++;

    }

    while(j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }

    while(i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    

}

void merge_sort(int a[], int l,int r)
{
    if(l < r)
    {
        int  mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,r,mid);
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

    merge_sort(a,0,n-1);

    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
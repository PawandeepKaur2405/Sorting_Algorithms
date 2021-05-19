#include<bits/stdc++.h>
using namespace std;

void count_sort(int *a, int n)
{
    //finding maximum element
    int k = a[0];

    for(int i=1 ; i<n ; i++)
    {
        k = max(k,a[i]);
    }

    k += 1;

    int freq[k+1] = {0};

    //Frequency Array
    for(int i=0 ; i<n ; i++)
    {
        freq[a[i]]++;
    }

    //Finding position of elements
    for(int i=1 ; i<=k ;  i++)
    {
        freq[i] += freq[i-1];
    }

    int result[n];

    for(int i=n-1 ; i>=0 ; i--)
    {
        int e = a[i];
        result[--freq[e]] = e;

    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<result[i]<<" ";
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

    count_sort(a,n);

    return 0;
}
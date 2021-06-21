#include<iostream>
using namespace std;

void heapify(int a[], int n, int i)
{
    int largest = i;    //parent node
    int l = 2*i+1;      //left child
    int r = 2*i+2;      //right child

    if(l < n && a[l] > a[largest])
        largest = l;

    if(r < n && a[r] > a[largest])
        largest = r;

    if(largest != i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
int main()
{
    int a[] = {12,8,10,5,4,1,2};
    int n = 7;

    //creating a heap
    for(int i=(n/2)-1 ; i>=0 ; i--)
        heapify(a,n,i);

    //arranging elements
    for(int i=n-1 ; i>=0 ; i--)
    {
        swap(a[i],a[0]);
        heapify(a,i,0);
    }

    //displaying sorted elements
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";    //1 2 4 5 8 10 12
    }
    return 0;
}
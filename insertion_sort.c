#include<stdio.h>

void insertion_sort(int a[], int n)
{
    for(int i=1 ; i<n ; i++) 
    {
        int current = a[i];
        int j = i-1;

        while(j >= 0  && a[j] > current) 
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}

int main() 
{ 
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0 ; i<n ; i++)
        scanf("%d",&a[i]);

    insertion_sort(a,n);

    printf("Sorted Array is : ");
    for(int i=0 ; i<n ; i++) 
        printf("%d ",a[i]);

    return 0;
}
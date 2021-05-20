#include<stdio.h>

void bubble_sort(int A[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
         int flag = 0;
        for(int j=0 ; j<=i ; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        
        if(!flag)
        {
            break;
        }
    }
}    

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter elements : ");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    
    bubble_sort(a,n);
    
    printf("After Sorting : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
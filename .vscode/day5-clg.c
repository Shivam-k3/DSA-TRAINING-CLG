//minimum numbers of array
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for ( i = 1; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("%d",min);
    

}
// //homewokerk: Write a program to calculate the sum of all elements in an array.
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
}

// //homework: Write a program to find the largest element in an array.
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element in the array: %d\n", largest);
    return 0;
}
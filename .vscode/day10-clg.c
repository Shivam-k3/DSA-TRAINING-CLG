//wap to take the input from user and print all even numbers up to that number using pointer
#include<stdio.h>
int main()
{
    int a, i;
    int *p;
    p = &a;
    printf("Enter the number to print even numbers up to: ");
    scanf("%d", p);

    printf("Even numbers from 1 to %d are:\n", *p);
    for (i = 1; i <= *p; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
//Reverse a string using pointers.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *start, *end, temp;
    int len;
    printf("enter a string=");
    fgets(str,sizeof(str), stdin);
    len= strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
    }
    start = str;
    end = str + strlen(str) - 1;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
// //Find the length of a string using pointers
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0' && *ptr != '\n') // Exclude newline character if present
    {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
// //Calculate the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
    int arr[100],n,sum=0;
    int *ptr;
    printf("enter the number of elements in the array=");
    scanf("%d",&n);
    printf("enter the elements of the array=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ptr=&arr[i];
        sum=sum+*ptr;
    }
    printf("Sum of all elements in the array: %d\n", sum);
    return 0;
}
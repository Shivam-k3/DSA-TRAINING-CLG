#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a % 2)
    {
    case 0:
        printf("Even\n");
        break;
    case 1:
        printf("Odd\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
}
// // //celsius to fahrenheit
// #include <stdio.h>
// int main()
// {
//     float celsius, fahrenheit, kelvin;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
//     fahrenheit = (celsius * 9/5) + 32;
//     kelvin = celsius + 273.15;
// printf("Temperature in Fahrenheit: %f\nTemperature in Kelvin: %f\n", fahrenheit, kelvin);
//     return 0;
// }
// // wap to assign grades of a student based on marks obtained in 5 subjects calculate percentage and grade
// #include <stdio.h>
// int main()
// {
// int marks[5],sum=0;
// float percentage;
// char grade;
// for(int i=0;i<5;i++)
// {
//     printf("enter the marks of subject %d=",i+1);
//     scanf("%d",&marks[i]);
//     sum+=marks[i];

// }
// percentage=sum/5.0;
// if(percentage>=60 && percentage<=100)
// {
//    printf("Grade='A'\n");
// }
// else if(percentage>=50 && percentage<60)
// {
//     printf("Grade='B'\n");
// }
// else if(percentage>=40 && percentage<50)
// {
//     printf("Grade='C'\n");
// }
// else if(percentage>=30 && percentage<40)
// {
//     printf("Grade='D'\n");
// }
// else if(percentage<=30 && percentage>=10)
// {
//     printf("Grade='E'\n");
// }
// else{
//     printf("failed\n");
// }
// printf("percentage=%f\n",percentage);
// printf("sum=%d\n",sum);
// }
// // wap to check wheather a  given number is even or odd using switch case
#include <stdio.h>
int main()
{
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    switch (num % 2)
    {
    case 0:
        printf("even\n");
        break;
    case 1:
        printf("odd\n");
        break;
    default:
        break;
    }
}
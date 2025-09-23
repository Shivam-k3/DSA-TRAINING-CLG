// creating structure with more student details for 5 students
#include<stdio.h>

struct student
{
    int roll;
    char name[100];
    char dob[20];
    char contact[20];
    char address[100];
    float per;
};

int main()
{
    struct student s[5];
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        while(getchar() != '\n');

        printf("Name: ");
        scanf("%[^\n]", s[i].name);
        while(getchar() != '\n');

        printf("Date of Birth (DD/MM/YYYY): ");
        scanf("%[^\n]", s[i].dob);
        while(getchar() != '\n');

        printf("Contact: ");
        scanf("%[^\n]", s[i].contact);
        while(getchar() != '\n');

        printf("Address: ");
        scanf("%[^\n]", s[i].address);
        while(getchar() != '\n');

        printf("Percentage: ");
        scanf("%f", &s[i].per);
        while(getchar() != '\n');
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Date of Birth: %s\n", s[i].dob);
        printf("Contact: %s\n", s[i].contact);
        printf("Address: %s\n", s[i].address);
        printf("Percentage: %.2f%%\n", s[i].per);
    }

    return 0;
}

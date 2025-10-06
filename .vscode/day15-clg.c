#include<stdio.h>

struct Employee {
    char name[100];
    int age;
    float salary;
    int id;
};

int main() {
    struct Employee emp[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);
        getchar(); 

        printf("Enter employee name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("Enter employee age: ");
        scanf("%d", &emp[i].age);

        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);

        printf("\nEmployee Details:\n");
        printf("Name: %s", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("ID: %d\n", emp[i].id);
    }
    return 0;
}
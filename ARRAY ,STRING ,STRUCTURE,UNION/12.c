#include <stdio.h>
#include <string.h>

// create the structure

int main()
{
    struct Employdata
    {
        char name[20];
        int employId;
        int salary;
    };

    // Accese of structure
    struct Employdata s1;

    printf("enter your name: ");
    scanf(" %s", s1.name);
    printf("enter your employData: ");
    scanf("%d", &s1.employId);
    printf("enter your salary: ");
    scanf("%d", &s1.salary);
    // getchar();

    // printf("%d", s1.salary);

    printf(" %s your employid is: %d & your salary is:  %d ", s1.name, s1.employId, s1.salary);
}
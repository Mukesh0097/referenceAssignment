#include <stdio.h>
#include <stdlib.h> //header for dynamic allocation
#include <string.h>
// define ID_LEN 5;
struct studentDetailes
{
    char name[20];
    int contact;
};
int main()
{
    // malloc()
    // calloc()
    // free()
    // realloc()  these all using for dynamic allocation

    int size;
    int i;
    int ID_LEN = 5;
    char **studentName;
    int *contct;
    struct studentDetailes d1;
    printf("enter the size of database you want: ");
    scanf("%d", &size);

    printf("\n take input for name array \n");
    contct = (int *)malloc(size * sizeof(int));
    studentName = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++)
    {
        studentName[i] = malloc((ID_LEN + 1) * sizeof(char));
        printf("plz enter the string of maxlength 5: ");
        scanf("%s", d1.name);
        strcpy(studentName[i], d1.name);
    }
    printf("\n <---- after take input  ---> \n");

    for (int i = 0; i < size; i++)
    {
        printf("%s ", studentName[i]);
    }

    printf("\n take input for contact array \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &d1.contact);
        contct[i] = d1.contact;
        // printf("%d", contct[i]);
    }

    printf("\n< --- after taking input of contact ---> \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", contct[i]);
    }
}
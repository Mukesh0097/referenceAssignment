#include <stdio.h>
#include <string.h>

struct studentProgressDetaile
{
    char nameOfStudent[100];
    int rollNo;
    int maths;
    int english;
    int science;
    int maxMarks;
    int minMarks;
    int totalMarks;
    char remark[40];
};

int main()
{
    // student having data members  to store roll number, name of student,name of three subjects, max marks mim marks.Declare a structure variable of student provide facilities to input  data in data member and display result of student

    struct studentProgressDetaile details;

    printf("enter your first name: ");
    scanf(" %s", details.nameOfStudent);
    getchar();
    printf("enter your rollNo: ");
    scanf(" %d", &details.rollNo);
    getchar();
    printf("enter your Maths marks: ");
    scanf("%d", &details.maths);
    getchar();
    printf("enter your english marks: ");
    scanf("%d", &details.english);
    getchar();
    printf("enter your science: ");
    scanf("%d", &details.science);
    getchar();
    printf("enter Max_Marks: ");
    scanf("%d", &details.maxMarks);
    getchar();
    printf("enter Min_Marks: ");
    scanf("%d", &details.minMarks);
    getchar();

    details.totalMarks = details.english + details.maths + details.science;
    if (details.totalMarks < (3 * details.minMarks) || (details.maths < details.minMarks) || (details.english < details.minMarks) || (details.science < details.minMarks))
    {
        strcpy(details.remark, "fail");
    }
    else
    {
        strcpy(details.remark, "pass");
    }

    printf("Name: %s             RollNo: %d    \n", details.nameOfStudent, details.rollNo);
    printf("Subject  MaxMarks    MinMarks      Marks\n");
    printf("Maths      %d         %d            %d\n", details.maxMarks, details.minMarks, details.maths);
    printf("english    %d         %d            %d\n", details.maxMarks, details.minMarks, details.english);
    printf("science    %d         %d            %d\n", details.maxMarks, details.minMarks, details.science);
    printf("totalMarks :          %d            Remark: %s", details.totalMarks, details.remark);
}
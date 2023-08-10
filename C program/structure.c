#include <stdio.h>
#include <string.h>

struct getstudent
{
    int id;
    char myname[30];
    char *course;
    struct getsubject
    {
        char subject1[10];
        char subject2[10];
        char subject3[10];
    } subject;
};

int main()
{

    struct getstudent student[10];
    int count = -1;
    int t = 1;

    do
    {
        int c;
        printf("Perform the following operation\n");
        printf("1. Addd a student \n 2. Delete a student \n 3. Update student record \n 4. List all Student \n 5. Exit \n");
        scanf("%d", &c);

        switch (c)
        {

        case 1:
            ++count;
            if (count >= 0 && count < 10)
            {
                int select;
                printf("Enter the  student id \n");
                scanf("%d", &student[count].id);
                printf("Enter the student name\n");
                scanf("%s", &student[count].myname);
                printf("Select the course of the student : \n 1. IT \n 2. ME \n 3. CSE\n");
                scanf("%d", &select);
                switch (select)
                {
                case 1: // char temp[30] = "IT";
                    student[count].course = "IT";
                    break;
                case 2:
                    student[count].course = "ME";
                    break;
                case 3:
                    student[count].course = "CSE";
                    break;
                default:
                    student[count].course = "Invalid";
                    break;
                }
                printf("Enter the subject  of  the course : %s\n", student[count].course);
                scanf("%s", &student[count].subject.subject1);
                scanf("%s", &student[count].subject.subject2);
                scanf("%s", &student[count].subject.subject3);
                printf("\n Successfully Addedd\n");
            }
            else
            {
                printf("\nRecord is full\n");
            }
            break;

        case 4:
            if (count >= 0)
                for (int i = 0; i <= count; i++)
                {
                    printf("Id No : %d ", student[i].id);
                    printf("\n Name : %s", student[i].myname);
                    printf("\n Course : %s", student[i].course);
                    printf("\n Subject : %s \n\t %s \n\t %s", student[i].subject.subject1, student[i].subject.subject2, student[i].subject.subject3);
                }
            else
            {
                printf("\n Record is empty\n");
            }
            break;
        case 5:
            t = 0;
            printf("\n Successfully Exited");
            break;
        }

    } while (t);
}
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int RollNo;
    char Name[30];
    double Marks;
};

int main()
{
    struct Student s1,s2;
    FILE *fptr;
    fptr == fopen("D:\\student", "w");
    if  (fptr == NULL)
    {
        printf("Error saving file");
        return 1;
    }
    while (1)
    {
            printf("Enter you number :");
            scanf("%d", &s1.RollNo);
            printf("Enter your name :");
            scanf("%s", &s1.Name);
            printf("Enter your Marks :");
            scanf("%.2f", &s1.Marks);

            fprintf(fptr,"%d\t %s\t %.1f\t", s1.RollNo, s1.Name, s1.Marks);
             printf("Continue (Y/N)");
              char ch = getchar();
              if (ch == 'N' || ch =='n')
                break;

    }

    fclose(fptr);
    return 0;
}


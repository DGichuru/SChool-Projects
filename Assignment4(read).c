/*Daniel Gichuru P15/133036/2018*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*This program prints specific data from num.txt*/
    char read[100];
    int number;
    printf("Number of lines in the file to be printed:\n Compute number of integers written:");
    scanf("%d",&number);
    FILE *fp;
    fp = fopen("num.txt", "r");

       if((fp = fopen("num.txt","r")) == NULL)
       {
           printf("Error opening file!");
       }
       /*reading file contents using loop*/
       int i;
       for (int i=0;i<number;i++)
       {
           fgets(read,1000,fp);
           printf("%s",read);
       }
       return 0;
}

//Calculating average of elements in an array//
#include <stdio.h>

int main()
{
    int array[1000];
    int integers;
    int sum = 0;
    float average;
    printf("Enter numbers you want average : ");
    scanf("%d", &integers);
    {
        if(integers>15)
            printf("Invalid entry");

    }

    int i;
    for(i=0;i<integers;i++)
    {
        printf("Enter a number :");
        scanf("%d", &array[i]);

    }
      for(i=0;i<integers;i++)
    {
        sum += array[i];

    }
    printf("The sum of the elements is = %d :",sum);
    average = sum/integers;
    printf("The average of all elements is %.2f", average);
}

//Finding the Smallest integer of an array//7
#include <stdio.h>

int main()

{
    int array[15];
    int integers;
    int min = 1000;
    printf("Enter the Integers(Less than 15):");
    scanf("%d",&integers);

    int i;
    for(i=0;i<integers;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&array[i]);

    }
    for(i=0;i<integers;i++)
    {
        if (min > array[i] )
            min = array[i];
    }
    printf("The smallest element is %d",min);
}

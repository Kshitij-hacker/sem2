#include <stdio.h>
int main()
{
    int i,num;
    printf("Program to print even number between a given range\n\n");
    printf("Enter the range upto which tyou want even number\n");
    scanf("%d",&num);
    i=1;
    while (i<=num)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        ++i;
        
    }
    
    return 0;
}
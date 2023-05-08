#include<stdio.h>
int main()
{
    int i,num;
    printf("Program to print odd number between a given range\n\n");
    printf("Enter the range upto which you want to print odd number\n");
    scanf("%d",&num);

    i=1;
    do
    {
      if (i%2!=0)
      {
        printf("%d ",i);
      }
       ++i;
      
    } while (i<=num);
    
    return 0;
}
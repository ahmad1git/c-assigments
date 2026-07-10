#include <stdio.h>
int main()
{
   int firstnum;
   int secondnum;
   int sum;
   while(1)
   {
       printf("Enter first number:");
       scanf("%d",&firstnum);
       printf("Please enter second number:");
       scanf("%d",&secondnum);
       sum=firstnum+secondnum;
       printf("sum=%d\n",sum);
   }
    return 0;
}

#include <stdio.h>
int res;
void add(int x,int y)
{
    res=x+y;
    printf("%d",res);
}
void subtract(int x,int y)
{
    res=x-y;
     printf("%d",res);
}
void multiply(int x,int y)
{
    res=x*y;
     printf("%d",res);
}
void divide(int x,int y)
{
    res=x/y;
     printf("%d",res);
}
void and(int x,int y)
{
    res=x&y;
     printf("%d",res);
}
void or(int x,int y)
{
    res=x|y;
     printf("%d",res);
}
 void not(int x)
 {
     res= ~x;
      printf("%d",res);
 }
 void xor(int x,int y)
 {
     res= x^y;
      printf("%d",res);
 }
 void rem(int x,int y)
 {
     res=x%y;
      printf("%d",res);
 }
 void inc(int x)
 {
     res=x+1;
      printf("%d",res);
 }
 void dec(int x)
 {
 res=x-1;
  printf("%d",res);
 }
int main()
{
    int a,b;
    int operand;
    printf("Enter operation ID: ");
scanf("%d",&operand);
switch(operand)
{
     case 1:
     scanf("%d%d",&a,&b);
        add(a,b);
        break;

    case 2:
    scanf("%d%d",&a,&b);
        subtract(a,b);
        break;

    case 3:
    scanf("%d%d",&a,&b);
        multiply(a,b);
        break;

    case 4:
    scanf("%d%d",&a,&b);
        divide(a,b);
        break;

    case 5:
    scanf("%d%d",&a,&b);
        and(a,b);
        break;

    case 6:
    scanf("%d%d",&a,&b);
        or(a,b);
        break;

    case 7:
    scanf("%d",&a);
        not(a);
        break;

    case 8:
    scanf("%d%d",&a,&b);
        xor(a,b);
        break;

    case 9:
    scanf("%d%d",&a,&b);
        rem(a,b);
        break;

    case 10:
    scanf("%d",&a);
        inc(a);
        break;

    case 11:
    scanf("%d",&a);
        dec(a);
        break;

    default:
        printf("Invalid Operation ID");
}
  
    return 0;
}

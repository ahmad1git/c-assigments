#include <stdio.h>
int main()
{
    int class1[10]={78, 45, 92, 61, 33, 87, 54, 100, 26, 71};
    int class2[10]={49, 82, 67, 15, 94, 58, 73, 39, 88, 50};
    int class3[10]={21, 97, 64, 42, 76, 55, 30, 89, 68, 13};
    int highest1 = class1[0];
    int lowest1 = class1[0];
    int highest2 = class2[0];
    int lowest2 = class2[0];
    int highest3 = class3[0];
    int lowest3 = class3[0];
    int passed=0;
    int failed=0;
    float sum=0;
     for(int i=0; i<10; i++)
{
    if(class1[i] < 50)
    {
        printf("Class1: Failed\n");
        failed++;
    }
    else{
        printf("Class1: Passed\n");
        passed++;
        
}
sum=sum+class1[i];
if(class1[i]>highest1)
        {
            highest1=class1[i];
        }
        if(class1[i]<lowest1)
        {
            lowest1=class1[i];
        }
}

for(int i=0; i<10; i++)
{
    if(class2[i] < 50)
    {
        printf("Class2: Failed\n");
        failed++;
    }
    else
    {
        printf("Class2: Passed\n");
        passed++;
    }
    sum=sum+class2[i];
    if(class2[i] > highest2)
{
    highest2 = class2[i];
}

if(class2[i] < lowest2)
{
    lowest2 = class2[i];
}
}


for(int i=0; i<10; i++)
{
    if(class3[i] < 50)
    {
        printf("Class3: Failed\n");
        failed++;
    }
    else{
        printf("Class3: Passed\n");
        passed++;
    }
    sum=sum+class3[i];
    if(class3[i] > highest3)
{
    highest3 = class3[i];
}

if(class3[i] < lowest3)
{
    lowest3 = class3[i];
}
}
printf("Number of passed students: %d\n",passed);
printf("Number of failed students: %d\n",failed);
printf("Highest grade: %d",highest1);
printf("Class1 Lowest = %d\n", lowest1);
printf("Class2 Highest = %d\n", highest2);
printf("Class2 Lowest = %d\n", lowest2);
printf("Class3 Highest = %d\n", highest3);
printf("Class3 Lowest = %d\n", lowest3);
printf("The average is: %f",sum/30);
    return 0;
}

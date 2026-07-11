#include <stdio.h>
int main()
{
    int passwords[3] = {12347788, 56785566, 98701122};
    char user[10];
    int password;
    int valid = 0;
    printf("Please enter userID:");
    scanf("%s",&user);
    printf("Please enter password:");
    scanf("%d",&password);
    for(int i=0;i<3;i++)
    {
        if(password==passwords[i])
        {
           if(i==0&&user[0]=='A'&&user[1]=='h'&&user[2]=='m'&&user[3]=='e'&&user[4]=='d')
           {
               valid=1;
           }
           if (i == 1 && user[0] == 'A' && user[1] == 'm' && user[2] == 'r')
            {
                valid = 1;
            }
            if (i == 2 && user[0] == 'W' && user[1] == 'a' && user[2] == 'e' && user[3] == 'l')
            {
                valid = 1;
            }  
    
        }
        }
        return 0;
}

#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int j=0;j<m;j++)
    {
        printf("#");
    }

    return 0;
}


//10
//#
//##
//# #
//#  #
//#   #
//#    #
//#     #
//#      #
//#       #
//##########

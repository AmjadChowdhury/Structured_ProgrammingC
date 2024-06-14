#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=i;k<4;k++)
        {
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

//    *
//   ***
//  *****
// *******
//*********

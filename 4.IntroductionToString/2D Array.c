#include<stdio.h>
int main()
{
    int a[3][2];
    // Take value
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Print value
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

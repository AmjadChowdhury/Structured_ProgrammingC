#include<stdio.h>
int main()
{
    int n,m;
    printf("Number of rows & columns : ");
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    {
        printf("#");
    }
    printf("\n");

    for(int i=0;i<n-2;i++)
    {
        printf("#");
        for(int j=0;j<m-2;j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    for(int i=0;i<m;i++)
    {
        printf("#");
    }

    return 0;
}

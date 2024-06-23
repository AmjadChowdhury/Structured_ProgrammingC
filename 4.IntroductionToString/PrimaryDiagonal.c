#include<stdio.h>
int main()
{
    int r=2,c=2;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r == c)
    {
        int flag = 1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i == j)
                {
                    if(a[i][j] != 0)
                    {
                        continue;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
                else
                {
                    if(a[i][j] != 0)
                    {
                        flag = 0;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        if(flag == 1)
            printf("Primary Diagonal\n");
        else
            printf("No Primary Diagonal\n");
    }
    else
    {
        printf("No Primary Diagonal\n");
    }

    return 0;
}

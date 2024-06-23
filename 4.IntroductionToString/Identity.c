#include<stdio.h>
int main()
{
    int r=3,c=3;
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
                    if(a[i][j] != 1)
                    {
                        flag = 0;
                        break;
                    }
                    continue;
                }
                else
                {
                    if(a[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                    continue;
                }
            }
        }
        if(flag == 1)
            printf("Identity matrix\n");
        else
            printf("Not Identity matrix\n");
    }
    else
    {
        printf("Not Identity Matrix\n");
    }

    return 0;
}


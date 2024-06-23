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
        int x = a[0][0];
        int flag = 1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i == j)
                {
                    if(a[i][j] != x)
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
            printf("Scalar matrix\n");
        else
            printf("Not Scalar matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }

    return 0;
}

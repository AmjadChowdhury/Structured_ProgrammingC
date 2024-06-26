#include<stdio.h>
int main()
{
    int arr[5][5];
    int x,y;
    int dis = 0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    if(x > 2)
        dis += (x-2);
    else
        dis += (2-x);
    if(y > 2)
        dis += (y-2);
    else
        dis += (2-y);


    printf("%d\n",dis);

    return 0;
}

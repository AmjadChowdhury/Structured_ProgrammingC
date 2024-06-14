#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    int e_c=0,o_c=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
            e_c++;
        else
            o_c++;
    }
    if(e_c == 1)
    {
        for(int i=1;i<=n;i++)
        {
            if(arr[i]%2 == 0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(arr[i]%2 == 1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}

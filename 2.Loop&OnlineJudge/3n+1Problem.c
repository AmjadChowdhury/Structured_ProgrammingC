#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    while(n != 1)
    {
        printf("--> %d\n",n);
        if(n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
    }
    printf("--> 1\n");

    return 0;
}

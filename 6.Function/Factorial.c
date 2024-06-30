#include<stdio.h>
int fact(int n)
{
    if(n == 0)
        return 1;
    int ans = 1;
    for(int i=n;i>=1;i--)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,fact(a));
    return 0;
}

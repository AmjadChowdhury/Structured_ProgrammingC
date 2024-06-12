#include<stdio.h>
int main()
{
    long long int n,x;
    scanf("%lld",&n);
    long long int sum = (n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        scanf("%lld",&x);
        sum-=x;
    }
    printf("%lld\n",sum);


    return 0;
}

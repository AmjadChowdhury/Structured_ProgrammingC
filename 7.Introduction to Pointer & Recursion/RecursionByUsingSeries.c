#include<stdio.h>
int sumOfSeries(int n)
{
    if(n == 1)
        return 1;
    return n+sumOfSeries(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = sumOfSeries(n);
    printf("The sum of series is %d\n",ans);
}

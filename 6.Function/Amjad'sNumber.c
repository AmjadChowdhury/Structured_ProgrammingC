#include<stdio.h>

int isSevenPresent(int n)
{
    int i = n;
    while(i>=1)
    {
        if(i%10 == 7)
            return 1;
        else
            i/=10;
    }
    return 0;
}

int sum(int n)
{
    int ans = 0;
    int i = n;
    while(i >= 1)
    {
        ans += (i%10);
        i/=10;
    }
    return ans;
}
int isPrime(int n)
{
    int last = n%10;
    if(last == 1)
        return 0;
    for(int i=2;i<last;i++)
    {
        if(last%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(isSevenPresent(n) && sum(n) >= 10 && isPrime(n))
        printf("%d is Amjad's Number\n",n);
    else
        printf("%d is not Amjad's Number\n",n);


    return 0;
}

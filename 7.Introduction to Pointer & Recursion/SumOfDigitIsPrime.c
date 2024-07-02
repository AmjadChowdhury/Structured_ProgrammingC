#include<stdio.h>
#include<math.h>
int SOD(int n)
{
    int sum = 0;
    while(n>=1)
    {
        sum += (n%10);
        n/=10;
    }
    return sum;
}
int isPrime(int n)
{
    if(n == 1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(SOD(n)))
        printf("Sum of digit is prime number\n");
    else
        printf("The number is ugly\n");
    return 0;
}

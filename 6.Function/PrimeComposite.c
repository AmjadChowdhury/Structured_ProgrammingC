#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
    if(n == 1)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(isPrime(a))
        printf("%d is Prime Number.\n",a);
    else
        printf("%d is Composite Number.\n",a);

    return 0;
}

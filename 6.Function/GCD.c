#include<stdio.h>
int GCD(int a,int b)
{
    int l,s;
    if(a>b)
    {
        l = a;
        s = b;
    }
    else
    {
        l = b;
        s = a;
    }
    for(int i = s;i>=1;i--)
    {
        if(l%i == 0 && s%i == 0)
            return i;
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd = GCD(a,b);
    printf("The GCD is %d\n",gcd);

    return 0;
}

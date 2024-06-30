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
int perm(int n,int r)
{
    return fact(n)/fact(n-r);
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    printf("Permutation of %dP%d is %d\n",n,r,perm(n,r));
    printf("Combination of %dC%d is %d\n",n,r,comb(n,r));

    return 0;
}

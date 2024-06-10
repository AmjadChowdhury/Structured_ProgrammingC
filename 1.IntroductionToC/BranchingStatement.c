#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest number compare to %d and %d",a,b,c);
        }
        else
        {
            printf("%d is largest number compare to %d and %d",c,b,a);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is largest number compare to %d and %d",b,a,c);
        }
        else
        {
            printf("%d is largest number compare to %d and %d",c,b,a);
        }
    }
    return 0;
}

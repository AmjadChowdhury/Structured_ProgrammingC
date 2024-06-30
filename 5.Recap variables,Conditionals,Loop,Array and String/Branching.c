#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    if(a > b)
    {
        printf("A is largest\n");
    }
    else if(a < b)
    {
        printf("B is largest\n");
    }
    else
    {
        printf("Both are equal\n");
    }

    return 0;
}

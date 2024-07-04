#include<stdio.h>
void LS(int a,int b,int* l,int* s)
{
    *l = (a>b)? a : b;
    *s = (a>b)? b : a;
}
int main()
{
    int a = 20;
    int b = 50;
    int large,small;

    LS(a,b,&large,&small);
    printf("%d %d",large,small);

    return 0;
}

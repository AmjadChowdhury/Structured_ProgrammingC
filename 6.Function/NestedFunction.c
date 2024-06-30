#include<stdio.h>
#include<math.h>

int absolute(int a)
{
    if(a>= 0)
        return a;
    return -a;
}
int square(int a)
{
    return pow(a,2);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x = absolute(a-3);
    int y = square(b+4);
    printf("%d %d\n",x,y);
    float ans = sqrt(absolute(a-3)+square(b+4));
    printf("The final answer is %lf\n",ans);

    return 0;
}

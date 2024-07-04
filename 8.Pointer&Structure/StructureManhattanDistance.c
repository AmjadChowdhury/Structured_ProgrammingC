#include<stdio.h>
#include<math.h>
struct point
{
    float x;
    float y;
};
float manhattan(struct point a,struct point b)
{
    return abs(a.x-b.x)+abs(a.y-b.y);
}
int main()
{
    struct point a = {1,1};
    struct point b = {4,5};

    float ans = manhattan(a,b);
    printf("%f\n",ans);

    return 0;
}

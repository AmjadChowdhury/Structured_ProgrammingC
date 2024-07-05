#include<stdio.h>
struct point
{
    float x;
    float y;
};

struct point mid(struct point a,struct point b)
{
    struct point ans;
    ans.x = (a.x+b.x)/2;
    ans.y = (a.y+b.y)/2;
    return ans;
}
int main()
{
    struct point a = {4,5};
    struct point b = {6,7};

    struct point ans = mid(a,b);
    printf("Mid point is (%f, %f)\n",ans.x,ans.y);
    // Mid point is (5.000000, 6.000000)

    return 0;
}

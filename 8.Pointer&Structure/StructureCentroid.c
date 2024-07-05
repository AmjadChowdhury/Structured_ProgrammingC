#include<stdio.h>
struct point
{
    float x;
    float y;
};
struct triangle
{
    struct point a;
    struct point b;
    struct point c;
};
struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x = (t.a.x+t.b.x+t.c.x)/3;
    ans.y = (t.a.y+t.b.y+t.c.y)/3;

    return ans;
}
int main()
{
    struct point a = {1,1};
    struct point b = {4,5};
    struct point c = {3,3};

    struct triangle t = {a,b,c};

    struct point ans = centroid(t);
    printf("The centroid of this triangle (%f,%f)\n",ans.x,ans.y);
    // The centroid of this triangle (2.666667,3.000000)

    return 0;
}

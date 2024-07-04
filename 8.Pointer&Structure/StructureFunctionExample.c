#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
double dis(struct point p,struct point q)
{
    return sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
}
int main()
{
    struct point d1 = {0,0};
    struct point d2 = {3,4};
    double ans = dis(d1,d2);
    printf("%lf\n",ans); // 5.00
    return 0;
}

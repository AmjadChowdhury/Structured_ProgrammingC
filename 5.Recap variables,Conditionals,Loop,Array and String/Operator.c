#include<stdio.h>
#include<math.h>
int main()
{
    // Arithmetic....
    int a=5,b=2;
    int s = a+b;
    int d = a-b;
    int m = a*b;
    int div = a/b;
    int q = a%b;
    printf("%d %d %d %d %d\n",s,d,m,div,q);
    // 7 3 10 2 1

    int power = pow(3,2);
    double root = sqrt(49);
    printf("The power of 3 is %d\nthe root is %0.2lf\n",power,root);
    //The power of 3 is 9
    //the root is 7.00

    // Relational....
    int x = 10;
    int y = 7;
    printf("%d %d %d %d %d %d\n",x>y,x<y,x>=y,x<=y,x==y,x!=y);
    //1 0 1 0 0 1

    // Logical....
    printf("%d %d %d\n",(x>y && x!=y),(x>y || x==y),!(x>y));
    // 1 1 0

    // Bitwise....
    int p = 22;
    int r = 5;
    printf("%d %d %d\n",(p & r),(p | r),~r);
    // 4 23 -6
    // ~r = -(r+1)


    return 0;
}

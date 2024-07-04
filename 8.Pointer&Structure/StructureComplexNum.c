#include<stdio.h>
struct num
{
    float real;
    float img;
};
void comp(struct num n1)
{
    printf("(%.2f) + (%.2f)",n1.real,n1.img);
}

struct num complexAdd(struct num n1,struct num n2)
{
    struct num ans;
    ans.real = n1.real + n2.real;
    ans.img = n1.img + n2.img;

    return ans;
}
int main()
{
    struct num n1 = {2,3};
    struct num n2 = {4,-5};

    struct num add = complexAdd(n1,n2);
    comp(add);
    // 6.00 + 8.00

    return 0;
}

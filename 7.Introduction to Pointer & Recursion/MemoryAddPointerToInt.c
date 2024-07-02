#include<stdio.h>
int main()
{
    int a = 25;
    int* p = &a;
    printf("%p\n",&a); // 000000000061FE14
    printf("%p\n",p); // 000000000061FE14

    printf("%d\n",*p); // 25

    *p = a+10;
    printf("%d\n",a);


    return 0;
}

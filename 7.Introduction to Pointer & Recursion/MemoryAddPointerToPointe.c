#include<stdio.h>
int main()
{
    int a = 23;
    int* p = &a;
    printf("%p\n",p); // 000000000061FE14

    int** q = &p;
    printf("%p\n",q); // 000000000061FE08

    **q = a*10;
    printf("%d\n",a); // 230
    printf("%d\n",**q); // 230

    return 0;
}

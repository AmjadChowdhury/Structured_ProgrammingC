#include<stdio.h>
int main()
{
    int a = 41;
    // 41 = 1010010
    a = a<<1;
    // multiflied by 2 for once...
    // binary r seshe ekta 0 boshe sob ekgor pichone reke...
    printf("%d\n",a);
    // 82

    int b = 5;
    // 5 = 101
    b = b >> 1;
    // bame ekta 0 bit dukbe daner ekta bit pore jabe..
    // 1 bolle  1 bar 2 diye bag hobe..
    printf("%d\n",b);
    // 2


    return 0;
}

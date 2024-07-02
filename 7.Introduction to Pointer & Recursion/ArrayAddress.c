#include<stdio.h>
int main()
{
    int arr[10];
    printf("%p\n",arr); // 000000000061FDF0
    printf("%p\n",(arr+1)); // 000000000061FDF4
    printf("%p\n",(arr+2)); // 000000000061FDF8
    printf("%p\n",(arr+3)); // 000000000061FDFC
    printf("%p\n",(arr+4)); //

    return 0;
}

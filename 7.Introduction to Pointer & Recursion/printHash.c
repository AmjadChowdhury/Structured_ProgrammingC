#include<stdio.h>
void printHash(int n)
{
    for(int i=0;i<n;i++)
        printf("#");
    printf("\n");
}
int main()
{
    printHash(1);
    printHash(2);
    printHash(3);
    printHash(4);
    printHash(5);
    return 0;
}

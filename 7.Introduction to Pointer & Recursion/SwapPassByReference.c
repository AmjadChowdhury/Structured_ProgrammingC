#include<stdio.h>
void swap(int* a,int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a=10,b=15;
    printf("Before Swap a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swap a=%d,b=%d\n",a,b);
}

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
    /* Before Swap a=10,b=15
    After Swap a=15,b=10 */
}

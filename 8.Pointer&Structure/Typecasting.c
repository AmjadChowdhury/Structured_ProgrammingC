#include<stdio.h>
int main()
{
    double b;
    b = 25/4;
    printf("Before typecasting %lf\n",b);
    // Before typecasting 6.000000
    b = (double)25/4;
    printf("After typecasting %lf\n",b);
    // After typecasting 6.250000

    int a = 7;
    double d = 6.85;
    int* pa = &a;
    double* pd = (double*) pa;



    return 0;
}

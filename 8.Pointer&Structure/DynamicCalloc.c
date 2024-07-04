#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 6;
    int* ptr = (int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
        *(ptr+i) = i*2;
    for(int i=0;i<n;i++)
        printf("%dTh => %d\n",i,*(ptr+i));

    /*
    0Th => 0
    1Th => 2
    2Th => 4
    3Th => 6
    4Th => 8
    5Th => 10
    */
    free(ptr);
    return 0;
}

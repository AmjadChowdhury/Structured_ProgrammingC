#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 5;
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        scanf("%d",(ptr+i));
    for(int i=0; i<n; i++)
        printf("%dth => %d\n",i,*(ptr+i));

    ptr = realloc(ptr,(n+5)*sizeof(int));
    for(int i=5; i<10; i++)
        scanf("%d",(ptr+i));
    for(int i=0; i<10; i++)
        printf("%dth => %d\n",i,*(ptr+i));

    /*
      1 3 5 7 9
    0th => 1
    1th => 3
    2th => 5
    3th => 7
    4th => 9
    2 4 6 8 10
    0th => 1
    1th => 3
    2th => 5
    3th => 7
    4th => 9
    5th => 2
    6th => 4
    7th => 6
    8th => 8
    9th => 10
    */
    free(ptr);

    return 0;
}

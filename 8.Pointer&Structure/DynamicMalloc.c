#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 5;
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int)); //byte..
    for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(int i=0;i<n;i++)
        printf("%dth position => %d\n",i,*(ptr+i));

    /*
    2 4 6 8 10
    0th position => 2
    1th position => 4
    2th position => 6
    3th position => 8
    4th position => 10
    */
    free(ptr);
    return 0;
}

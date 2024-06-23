#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);

    int len = strlen(name)-1;
    printf("%d",len);

    return 0;
}

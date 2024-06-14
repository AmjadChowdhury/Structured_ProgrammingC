#include<stdio.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    puts(name);
    printf("My Full Name is : %s",name);

    return 0;
}

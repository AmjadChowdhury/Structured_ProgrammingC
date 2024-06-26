#include<stdio.h>
int main()
{
    char name[1005];
    scanf("%s",name);
    if(name[0] >= 'a' && name[0] <= 'z')
        name[0] -=32;
    puts(name);
    return 0;
}

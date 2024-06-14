#include<stdio.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int i = 0;
    while(name[i] != '\0')
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        i++;
    }
    puts(name);

    return 0;
}

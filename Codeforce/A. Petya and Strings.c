#include<stdio.h>
#include<string.h>
int main()
{
    char name1[105],name2[105];
    fgets(name1,sizeof(name1),stdin);
    fgets(name2,sizeof(name2),stdin);

    for(int i=0; name1[i] != '\0'; i++)
    {
        if(name1[i] >= 'A' && name1[i] <= 'Z')
        {
            name1[i] += 32;
        }
    }
    for(int i=0; name2[i] != '\0'; i++)
    {
        if(name2[i] >= 'A' && name2[i] <= 'Z')
        {
            name2[i] += 32;
        }
    }
    int l = strlen(name1)-1;
    for(int i=0; i<l; i++)
    {
        if(name1[i] < name2[i])
        {
            printf("%d\n",-1);
            return;
        }
        else if(name1[i] > name2[i])
        {
            printf("%d\n",1);
            return;
        }
        else
        {
            continue;
        }

    }
    printf("%d\n",0);
    return;
}

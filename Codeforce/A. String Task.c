#include<stdio.h>
#include<string.h>
int main()
{
    char word[105];
    fgets(word,sizeof(word),stdin);

    for(int i=0;word[i] != '\0';i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
    }
    for(int i=0;i<strlen(word)-1;i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y')
            continue;
        else
            printf(".%c",word[i]);
    }

    return 0;
}

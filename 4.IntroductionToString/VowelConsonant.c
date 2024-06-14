#include<stdio.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int vowel = 0;
    int consonant = 0;
    for(int i=0;name[i] != '\0';i++)
    {
        if(name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' ||
           name[i] == 'o' ||name[i] == 'O' ||name[i] == 'i' ||name[i] == 'I' ||
           name[i] == 'u' ||name[i] == 'U')
        {
            vowel++;
        }
        else if((name[i] >= 'a' && name[i] >= 'z') || (name[i] >= 'A' && name[i] >= 'Z'))
        {
            consonant++;
        }
        else
        {
            continue;
        }
    }
    printf("Number of vowels in %s is : %d\n",name,vowel);
    printf("Number of consonant in %s is : %d",name,consonant);
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    // space kawar jonno space disi....

    char ch;
    ch= getchar();

    char name[100];
    gets(name);

//    char name[100];
//    fgets(name,sizeof(name),stdin);

    printf("The number is %d\nThe character is %c\nThe first string is %s\n",n,ch,name);
    return 0;
}

//ekjon manush n ta chocolate khali...
//Sei dokandar k packet gula ferot dile 4tar binimoy 1ta chocolate de...
//tottal kotota chocolate khay...
#include<stdio.h>
int main()
{
    int choc,pack;
    printf("Enter Chocolate : ");
    scanf("%d",&choc);
    pack = choc;
    while(pack >= 4)
    {
        choc += (pack/4);
        pack = (pack/4) + (pack%4);

    }
    printf("Total khaisi : %d\n",choc);

    return 0;
}

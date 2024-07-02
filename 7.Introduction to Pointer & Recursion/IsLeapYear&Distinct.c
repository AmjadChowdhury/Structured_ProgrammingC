#include<stdio.h>
int isLeap(int year)
{
    if(year%400==0 ||(year%4==0 && year%100!=0))
        return 1;
    return 0;
}
int isDistinct(int year)
{
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    while(year >= 1)
    {
        arr[year%10]++;
        year /= 10;
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i] > 1)
            return 0;
    }
    return 1;

}
int main()
{
    int year;
    scanf("%d",&year);

    if(isLeap(year) && isDistinct(year))
        printf("The %d year is beautiful\n",year);
    else
        printf("The %d year is UGLY\n",year);


    return 0;
}

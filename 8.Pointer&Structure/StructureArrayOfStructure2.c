#include<stdio.h>
struct student
{
    int roll;
    double weight;
};
void printS(int n,struct student std)
{
    printf("Position of %th =>\n",n);
    printf("Roll -> %d,Weight -> %lf\n",std.roll,std.weight);
}
int main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter info of %d th => ",i);
        scanf("%d %lf",&s[i].roll,&s[i].weight);
    }
    for(int i=0;i<5;i++)
    {
        printS(i,s[i]);
    }


    return 0;
}

/*
Enter info of 0 th => 2056 58.9
Enter info of 1 th => 2165 72
Enter info of 2 th => 2064 76
Enter info of 3 th => 2059 71.78
Enter info of 4 th => 2065 86.98
Position of th =>
Roll -> 2056,Weight -> 58.900000
Position of th =>
Roll -> 2165,Weight -> 72.000000
Position of th =>
Roll -> 2064,Weight -> 76.000000
Position of th =>
Roll -> 2059,Weight -> 71.780000
Position of th =>
Roll -> 2065,Weight -> 86.980000
*/

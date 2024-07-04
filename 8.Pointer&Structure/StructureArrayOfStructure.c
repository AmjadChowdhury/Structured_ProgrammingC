#include<stdio.h>
struct student
{
    double weight;
    int roll;
};
int main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter weight and age of %dth iteration => ",i);
        scanf("%lf %d",&s[i].weight,&s[i].roll);
    }
    for(int i=0;i<5;i++)
    {
        printf("%dth position,Weight = %lf & Roll = %d\n",i,s[i].weight,s[i].roll);
    }
    return 0;
}

#include<stdio.h>
struct student
{
    double weight;
    int roll;
};
int main()
{
    struct student s[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter weight and age of %dth iteration => ",i);
        scanf("%lf %d",&s[i].weight,&s[i].roll);
    }
    for(int i=0; i<5; i++)
    {
        printf("%dth position,Weight = %lf & Roll = %d\n",i,s[i].weight,s[i].roll);
    }
    /*
     Enter weight and age of 0th iteration => 55.6 22
    Enter weight and age of 1th iteration => 51.3 21
    Enter weight and age of 2th iteration => 60 22
    Enter weight and age of 3th iteration => 62.5 23
    Enter weight and age of 4th iteration => 56.578 24
    0th position,Weight = 55.600000 & Roll = 22
    1th position,Weight = 51.300000 & Roll = 21
    2th position,Weight = 60.000000 & Roll = 22
    3th position,Weight = 62.500000 & Roll = 23
    4th position,Weight = 56.578000 & Roll = 24
    */
    return 0;
}

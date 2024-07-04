#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    int name[20];
    int age;
};
int main()
{
    struct student s1;
    s1.roll = 2056;
    strcpy(s1.name,"Amjad chy");
    s1.age = 21;

    printf("Roll => %d\tName => %s\tAge => %d",s1.roll,s1.name,s1.age);

    return 0;
}

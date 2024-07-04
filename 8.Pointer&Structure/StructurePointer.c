#include<stdio.h>
struct student
{
    int roll;
    int age;
};
int main()
{
    struct student s = {.roll = 2056,.age = 21};
    struct student* sp;
    sp = &s;
    printf("Roll = %d,Age = %d\n",sp->roll,sp->age);
    return 0;
}

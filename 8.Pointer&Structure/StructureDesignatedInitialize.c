#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
};
int main()
{
    struct student s1 = {2165,"Rahat Khan",23}; //Normal Initialize...
    struct student s2 = {.name="Amjadul Alam",.age = 21,.roll = 2056}; //Designated Initialize..

    printf("%s info => Roll->%d,name->%s,Age->%d\n",s1.name,s1.roll,s1.name,s1.age);
    // Rahat Khan info => Roll->2165,name->Rahat Khan,Age->23
    printf("%s info => Roll->%d,name->%s,Age->%d\n",s2.name,s2.roll,s2.name,s2.age);
    // Amjadul Alam info => Roll->2056,name->Amjadul Alam,Age->21
    return 0;
}

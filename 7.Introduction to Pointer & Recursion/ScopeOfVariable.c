#include<stdio.h>
int g = 7;
void increaseG(int p)
{
    printf("Initially,In ncreaseG function , g = %d\n",g);
    g+=p;
    printf("Fnally,In ncreaseG function , g = %d\n",g);

}
int main()
{
    printf("Initially,In main function , g = %d\n",g);
    increaseG(2);
    printf("Finally,In main function , g = %d\n",g);


    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int arr[n];
    int even_c=0;
    int odd_c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even_c++;
        else
            odd_c++;
    }
    printf("Total even numbers : %d\n",even_c);
    printf("Total odd numbers : %d\n",odd_c);

    return 0;
}

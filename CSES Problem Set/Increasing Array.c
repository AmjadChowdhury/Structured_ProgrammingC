#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n+5];

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            sum += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    printf("%lld\n",sum);

    return 0;
}

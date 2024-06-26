#include<stdio.h>
int main()
{
    int n=6;
    int arr[] = {5,9,15,12,25,21};
    for(int i=0;i<n;i++)
    {
        int flag = 1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;
            }
        }
        if(flag == 1)
            break;
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);


    return 0;
}

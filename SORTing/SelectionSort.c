#include<stdio.h>
int main()
{
    int n = 7;
    int arr[] = {19,26,22,10,25,50,45};

    for(int i=0;i<n-1;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
        if(i != min_idx)
        {
            int tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;
        }

    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);


    return 0;
}

#include<stdio.h>
void findMaxMin(int nums[],int n,int *p,int *q)
{
    *p = nums[0];
    *q = nums[0];
    for(int i=0;i<n;i++)
    {
        if(nums[i] > *p)
            *p = nums[i];
        if(nums[i] < *q)
            *q = nums[i];
    }
}
int main()
{
    int arr[] = {10,5,25,27,2,9,50,75,71,64};
    int sizeOfArr = sizeof(arr)/sizeof(int);

    int maxx,minn;
    findMaxMin(arr,sizeOfArr,&maxx,&minn);
    printf("Maxx Is %d\nMinn is %d\n",maxx,minn);
    /* Maxx Is 75
    Minn is 2 */

    return 0;
}

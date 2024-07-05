#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt","r");

    FILE *outputFile;
    outputFile = fopen("output.txt","w");

    if(inputFile == NULL)
    {
        printf("Not Found\n");
        return 0;
    }


    int n;
    fscanf(inputFile,"%d",&n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);
        sum += a;
    }
    fprintf(outputFile,"Sum -> %d",sum);

    return 0;
}

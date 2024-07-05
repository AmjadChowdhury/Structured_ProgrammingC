#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt","r");

    FILE *logFile;
    logFile = fopen("log.txt","a");
    if(inputFile == NULL)
    {
        fprintf(logFile,"Not Found 1000 time\n");
        return 0;
    }

    FILE *outputFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);

    fprintf(outputFile,"The number is %d\n",n);

    fclose(inputFile);
    fclose(outputFile);
    fclose(logFile);

    return 0;
}

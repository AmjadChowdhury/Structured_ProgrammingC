#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt","r");

    if(inputFile == NULL)
    {
        printf("Not Found\n");
        return 0;
    }

    FILE *outputFile;
    outputFile = fopen("output.txt","w");

//    while(1)
//    {
//        char ch = fgetc(inputFile);
//        if(ch == EOF)
//            break;
//        printf("%c",ch);
//    }

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF)
            break;
        fputc(ch,outputFile);
    }

    return 0;
}

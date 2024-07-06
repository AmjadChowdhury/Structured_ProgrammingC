#include<stdio.h>
#include<stdbool.h>

void printCell(int arr[][4],int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(arr[i][j] == -1)
                printf(" ");
            if(arr[i][j] == 1)
                printf("X");
            if(arr[i][j] == 2)
                printf("O");
            if(j<n)
                printf("\t|\t");
        }
        printf("\n");
        printf("------------------------------------\n");
    }
}

int isWin(int arr[][4],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i][1]==arr[i][2] && arr[i][2]==arr[i][3] && arr[i][1]!=-1)
        {
            return arr[i][1];
        }
    }
    for(int j=1;j<=n;j++)
    {
        if(arr[1][j]==arr[2][j] && arr[2][j]==arr[3][j] && arr[1][j]!=-1)
        {
            return arr[1][j];
        }
    }
    if(arr[1][1]==arr[2][2] && arr[2][2]==arr[3][3] && arr[1][1]!=-1)
    {
        return arr[1][1];
    }
    if(arr[1][3]==arr[2][2] && arr[2][2]==arr[3][1] && arr[1][3]!=-1)
    {
        return arr[1][3];
    }
    return -1;
}
int main()
{
    int n = 3;
    int arr[4][4];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            arr[i][j] = -1;
        }
    }

//    printCell(arr,n);

    bool player1 = true;
    bool player2 = false;
    while(true)
    {
        printCell(arr,n);
        if(player1)
        {
            int r,c;
            Flag1:
            printf("For turn player1(X),Enter row & col : ");
            scanf("%d %d",&r,&c);
            if(arr[r][c] != -1)
            {
                printf("Invalid Position...\n");
                goto Flag1;
            }
            arr[r][c] = 1;

            player1 = false;
            player2 = true;
        }
        else
        {
            int r,c;
            Flag2:
            printf("For turn player2(O),Enter row & col : ");
            scanf("%d %d",&r,&c);
            if(arr[r][c] != -1)
            {
                printf("Invalid Position...\n");
                goto Flag2;
            }
            arr[r][c] = 2;

            player2 = false;
            player1 = true;
        }
        // detect who win...
        if(isWin(arr,n)==1)
        {
            printf("Player1 Won!!!!\n");
            printCell(arr,n);
            break;
        }
        else if(isWin(arr,n)==2)
        {
            printf("Player2 Won!!!!\n");
            printCell(arr,n);
            break;
        }
    }


    return 0;
}

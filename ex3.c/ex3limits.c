#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int A[5];
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    int botl;
    int topl;
    int con;
    int redos=0;
    do
    {
        do
        {
            printf("Read bottom limit\n");
            scanf("%d",&botl);
            printf("Read top limit\n");
            scanf("%d",&topl);
            if (botl==topl)
            {
                printf("Bottom limit should not be the same with the top limit\n");
            }
            else if(botl>=topl)
            {
                printf("The bottom limit should be less than top limit\n");
            }

        }
        while (botl>=topl);
        printf("Bottom limit= %d\nTop limit=%d\n", botl,topl);
        int sum=0;
        int p=0;
        for (i=0;i<5;i++)
        {
            if (botl<A[i]<topl)
            {
                sum=sum+A[i];
                p=p+1;
            }
        }
        printf("\nIf you want to end press 1\nOr\nIf you want to redo this press 0\n");
        do{
        scanf("%d", &con);
        printf("%d\n",con);
        if (con==1)
        {
            printf("Now you are exiting the programm\n");
        }
        else if( con==0)
        {
            printf("You are doing it again\n");
        }
        else
        {
            printf("Type 1 or 0\n");
        }
        }
        while((con!=0)&&(con!=1));
        redos=redos+1;
    }
    while (con==0);
    printf("We did this %d times\n",redos);
    return 0;
}
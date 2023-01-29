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
        scanf("%d", &con);
        redos=redos+1;
    }
    while (con==0);
    printf("We did this %d times",redos);
    return 0;
}
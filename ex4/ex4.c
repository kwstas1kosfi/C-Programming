#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5];
    int i;
    for (i=0;i<5;i++)
    {
        if (i==0)
        {
            scanf("%d",&a[i]);
            printf("A[%d]=%d\n",i+1,a[i]);
        }
        else
        {
            int j=0;
            j=a[i]+5;
            do{
                printf("Diff than the prev one and higher by 5\n");
                scanf("%d",&a[i]);
                printf("A[%d]=%d\n",i+1,a[i]);
            }
            while (a[i]<(a[i-1]+5));
        }
    }
    for (i=0;i<5;i++)
    {
        printf("\tA[%d]=%d\n",i+1,a[i]);
    }
    printf("We need one replacment and one compare\n");
    int rep,com,sum=0;
    scanf("%d%d",&rep,&com);
    printf("rep=%d com=%d \n",rep,com);
    for (i=0;i<5;i++)
    {
        if(a[i]<com)
        {
            a[i]=rep;
            sum=sum+1;
        }
    }
     for (i=0;i<5;i++)
    {
        printf("\tA[%d]=%d\n",i+1,a[i]);
    }
    printf("sum=%d",sum);
    return 0;
}
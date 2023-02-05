#include <stdio.h>
//double array
int main(int argc, char *argv[])
{
    int a[5],b[5];
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        b[5-i]=a[i];
    }
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\t",i+1,a[i]);
        //printf("b[%d]=%d\t",i+1,b[i+1]);
    }
    printf("\nReversed array\n");
    for(i=0;i<5;i++)
    {
        //printf("a[%d]=%d\t",i+1,a[i]);
        printf("b[%d]=%d\t",i+1,b[i+1]);
    }
    for(i=0;i<5;i++)
    {
        if (a[i]<0)
        {
            a[i]=a[i]*(-1);
        }
    }
    printf("\nPositive Array\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\t",i+1,a[i]);
        //printf("b[%d]=%d\t",i+1,b[i+1]);
    }
    int sum=0,p=0;
    printf("\n");
    int j;
    for (i=0;i<5;i++)
    {
        p=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                p=1;
                //sum=sum+1;
                //printf("a[%d] = %d is prime\n",i+1,a[i]);                
                break;
            }
        }
        if(p==0)
        {
            printf("\t %d is prime",a[i]);
            sum=sum+1;

        }
    }
    printf("\nsum=%d",sum);
    return 0;
}
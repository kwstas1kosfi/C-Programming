#include <stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("Create an array of 7 positions\n");
    int Array[7];
    for( i=0;i<7;i++)
    {
        printf("Type an int number\n");
        scanf("%d",&Array[i]);
    }
    printf("Read 2 values, the first one is a and the second one is b\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("In case a>b swap them\n");
    printf("a=%d \n",a);
    printf("b=%d\n",b);
    if (a>b){
        int c;
        c=a;
        a=b;
        b=c;
    }
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    int sum=0;
    for (i=0; i<7;i++)
    {
        if ((Array[i]>a)&&(Array[i]<b))
        {
            sum=sum+Array[i];
        }
    }
    printf("The sum is : %d",sum);
    return 0;
}
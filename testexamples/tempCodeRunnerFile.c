#include <stdio.h>>
int main (void)
{
    int  i=0,a=17,c[3]={2,4,6};
    do
    {
        a=a-2;
        i=i+(a%c[i%3])+1;
    }while (a>i);
    printf("%d",i);
    return 0;
}
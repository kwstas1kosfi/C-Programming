
#include <stdio.h>
#include <string.h>

#define  SIZE_INT 10
#define  SIZE_CHAR 15

int findNumber(int pinakas[SIZE_INT] , int stoixeio);

int findCharacters(char pinakas[SIZE_CHAR] , char stoixeio);

int main()
{
    int pin1[SIZE_INT];
    char pin2[SIZE_CHAR];


    int aker;
    char cara;

    for (int j = 0; j < SIZE_INT; j++)
    {
        do {

            printf("Please enter the %d integer on the pin1:",j+1);
            fflush(stdin);
            scanf("%d\n:",pin1);

        }
        while(scanf("%d", &pin1) != 1);
    }


    do {

        printf("Please put an integer to investigate if it s inside matrix:");
        fflush(stdin);
        scanf("%d",&aker);

    }
    while(scanf("%d", &aker) != 1);


    int out = findNumber(pin1 , aker);

    if(out == -1)
        printf("The number was not found in matrix");
    else
        printf("The number was  found in position %d of the matrix",out+1);


    for (int j = 0; j < SIZE_CHAR; j++)
    {

        do {

            printf("Please enter the %d character on the pin1:",j+1);
            fflush(stdin);
            scanf("%c\n:",pin2);

        }
        while(scanf("%d", &pin2) != 1);

    }

    do {
        printf("Please put a character to investigate if it s inside matrix:");
        fflush(stdin);
        scanf("%c\n:",&cara);
    }
    while(scanf("%c", &cara) != 1);


   int out2= findCharacters(pin2,cara);


    if(out2 == -1)
        printf("The character was not found in matrix");
    else
        printf("The character was found in position %d times in the matrix ",out2);


    return 0;
}

int findNumber(int pinakas[SIZE_INT] , int stoixeio)
{
    for (int i = 0; i < SIZE_INT; i++)
    {
        if(pinakas[i]==stoixeio)
        {
            return i;
        }
    }
    return  -1;
}

int findCharacters(char pinakas[SIZE_CHAR] , char stoixeio)
{
    int cnt=0;
    for (int i = 0; i < strlen(pinakas); i++)
    {

        if(pinakas[i]==stoixeio)
        {
            cnt++;
        }
    }
    if(cnt==0)
        return -1;

    return cnt;
}

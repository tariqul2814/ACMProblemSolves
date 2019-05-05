#include <stdio.h>
#include <string.h>
struct student
{
    char roll[10];
    char name[100];
    char serial[50];

};
int main()
{
    int i;
    struct student s[2];
    for(i=0; i<2; i++)
    {
        printf("ROLL--");
        printf("\n");
        gets(s[i].roll);
        fflush(stdin);
        printf("\n");
        printf("NAME--");
        gets(s[i].name);
        fflush(stdin);
        printf("\n");
        printf("SERIAL--");
        gets(s[i].serial);
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        printf("the roll is here %s",s[i].roll);
        printf("\n");
        printf("the name is here %s",s[i].name);
        printf("\n");
        printf("the serial is here %s",s[i].serial);
        printf("\n");
        printf("\n");
    }
    printf("PRESS THE ROLL NUMBER THAT U WANT ");
    printf("\n");
    fflush(stdin);
    char arr[10];
    gets(arr);
    for(i=0; i<2; i++)
    {
        ///if(s[i].roll==b)
        if(strcmp(arr,s[i].roll)==0)
        {
            printf("the roll is here %s",s[i].roll);
            printf("\n");
            printf("the name is here %s",s[i].name);
            printf("\n");
            printf("the serial is here %s",s[i].serial);
            printf("\n");
        }
    }

    return 0;
}

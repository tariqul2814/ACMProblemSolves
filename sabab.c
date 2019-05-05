#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll;
    char name[100];
    char serial[50];

};
int main()
{
    int i;
    struct student s[2];
    for(i=0; i<2; i++)
    {
        fflush(stdin);
        printf("ROLL--");
        printf("\n");
        scanf("%d",&s[i].roll);
        printf("\n");
        fflush(stdin);
        printf("NAME--");
        fflush(stdin);
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("\n");
        printf("SERIAL--");
        scanf("%s",s[i].serial);
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        printf("the roll is here %d",s[i].roll);
        printf("\n");
        printf("the name is here ");
        printf("%s",s[i].name);
        printf("\n");
        printf("the serial is here ");
        printf("%s",s[i].serial);
        printf("\n");
        printf("\n");
    }
    printf("PRESS THE ROLL NUMBER THAT U WANT ");
    printf("\n");
  ///  char b; =>>>>> tmi structure er modhe roll niteso hoilo integer e ar input niteso character ??? ken???
    int b;
    scanf("%d",&b);
    for(i=0; i<3; i++)
    {
        if(s[i].roll==b)
        {
            printf("the roll is here %d",s[i].roll);
            printf("\n");
            printf("the name is here %s",s[i].name);
            printf("\n");
            printf("the serial is here %s",s[i].serial);
            printf("\n");
            break;
        }
    }

    return 0;
}

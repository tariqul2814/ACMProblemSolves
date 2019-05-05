#include <stdio.h>
#include <string.h>
struct student
{
    char roll[10];
    char serial[100];
    char name[100];
    //char section[100];
   // char dep[100];

};
int main()
{
    struct student s;
    printf("give the roll");
    gets(s.roll);
    fflush(stdin);
    printf("give the serial");
    gets(s.serial);
    fflush(stdin);
    printf("give me the name ");
    gets(s.name);


    printf("this is roll %s",s.roll);
    printf("\n");
    fflush(stdin);
    printf("this is serial %s",s.serial);
    printf("\n");
    fflush(stdin);
    printf("this is name %s",s.name);
    return 0;

     }


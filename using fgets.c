#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[100];
    char last_name[100];
    char full_name[200];
    printf("enter your first name : ");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strlen(first_name)-1]= '\0';
    printf("enter your last name : ");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strlen(last_name)-1]= '\0';
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    printf("Your name is %s", full_name);

}

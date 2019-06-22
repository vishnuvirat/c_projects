#include <stdio.h>
#include <string.h>
int main()
{
	char first_name[100];
	char last_name[100];
	char full_name[200];
	strcpy(first_name, "Vishnu");
	strcpy(last_name, "Chiluveri");
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	printf("My name is %s\n", full_name);
}




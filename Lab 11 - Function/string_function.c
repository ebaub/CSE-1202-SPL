#include <string.h>
#include <stdio.h>

int main()
{
    char name[100];
    scanf("%s ",name); // one word 
    char last_name[100];
    gets(last_name); // input whole line

    int len = strlen(name); // determines the length of a string
    printf("length of the string: %d\n",len);

    if(strcmp(name,"Zisan")==0) { // checks if two string is equal
        printf("It's Zishan\n");
    }

    strcat(name," ");
    strcat(name,last_name); // concat or add string
    puts(name); // prints a string

}
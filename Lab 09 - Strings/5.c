// EBAUB = BUAEB

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    gets(str);
    int len = strlen(str) - 1; // length

    char rev_str[len]; // REVERSE SAVE
    char j=0;

    for(i=len; i>=0; i--) {
        rev_str[j++] = str[i];
    }
    puts(rev_str);

    return 0;
}
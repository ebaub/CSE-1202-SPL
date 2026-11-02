
// String linear search

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    // scanf("%s",str); // word input; does not take space input
    gets(str); // line input with spaces

    for (i = 0; str[i]; i++) // str[n] = null character = 0 , breaks loop
    {
        if(i==0) {
            if(str[i]>='a' && str[i]<='z') {
                str[i] -= 32;
            }
        }
        if (str[i] == ' ') // if space found, increment word count
        {
            if(str[i+1]>='a' && str[i+1]<='z') {
                str[i+1] -= 32;
            }
            i++;
        }
    }
    puts(str);
    return 0;
}
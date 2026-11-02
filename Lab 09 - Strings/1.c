// String linear search

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    // scanf("%s",str); // word input; does not take space input
    gets(str); // line input with spaces

    int char_counter = 0;
    int word_counter = 1;

    for (i = 0; str[i]; i++) // str[n] = null character = 0 , breaks loop
    {
        if (str[i] == ' ') // if space found, increment word count
        {
            word_counter++;
            continue;
        }
        char_counter++; // increment character count
    }

    printf("Words: %d\n", word_counter);
    printf("Chars: %d\n", char_counter);
}
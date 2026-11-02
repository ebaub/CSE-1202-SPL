// WAP to count the numbers of vowels, consonants, digits and special symbols in a given
// string.

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    // scanf("%s", str); // EBAUB -> U
    gets(str);

    int digit_counter = 0;
    int symbol_counter = 0;
    int vowel_counter = 0;
    int consonent_counter = 0;

    for (i = 0; str[i]; i++) // str[n] = null character = 0 , breaks loop
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel_counter++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonent_counter++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit_counter++;
        }
        else
        {
            symbol_counter++;
        }
    }

    printf("Vowel: %d\n",vowel_counter);
    printf("Consonent: %d\n",consonent_counter);
    printf("Digit: %d\n",digit_counter);
    printf("Symbol: %d\n",symbol_counter);

    return 0;
}
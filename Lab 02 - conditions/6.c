#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch<='z')
    {
        printf("%c is small letter\n",ch);
    }
    else if (ch >= 'A' && ch<='Z')
    {
        printf("%c is capital letter\n",ch);
    }
    else if (ch >= '0' && ch<='9')
    {
        printf("%c is digit\n",ch);
    }
    else {
        printf("%c is Special character\n",ch);
    }

    return 0;
}
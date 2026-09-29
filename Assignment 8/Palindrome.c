#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    gets(str);

    i = 0;
    j = 0;

    while (str[j] != '\0')
    {
        j++;
    }

    j--;

    while (i < j)
    {
        if (tolower(str[i]) != tolower(str[j]))
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if (flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
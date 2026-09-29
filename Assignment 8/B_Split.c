#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    word = strtok(sentence, " ");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        word = strtok(NULL, " ");
    }

    printf("Total number of words = %d", count);

    return 0;
}
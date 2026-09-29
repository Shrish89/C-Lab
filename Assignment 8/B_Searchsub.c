#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], word[100];
    char *result;

    printf("Enter a sentence: ");
    gets(sentence);

    printf("Enter a word to search: ");
    gets(word);

    result = strstr(sentence, word);

    if (result != NULL)
        printf("Word found at position %ld.", result - sentence + 1);
    else
        printf("Word not found.");

    return 0;
}
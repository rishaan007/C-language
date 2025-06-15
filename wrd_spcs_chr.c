#include <stdio.h>

int main() {
    char str[200];
    int i = 0, spaces = 0, words = 0, characters = 0;

    printf("Enter a line of text:\n");
    gets(str);  // unsafe in modern C, but okay for simple practice

    while (str[i] != '\0') {
        // Count characters (excluding space)
        if (str[i] != ' ')
            characters++;

        // Count spaces
        if (str[i] == ' ')
            spaces++;

        // Count words: when current char is not space and next is space or '\0'
        if ((str[i] != ' ' && str[i+1] == ' ') || 
            (str[i] != ' ' && str[i+1] == '\0')) {
            words++;
        }

        i++;
    }

    printf("\nTotal Characters (excluding spaces): %d", characters);
    printf("\nTotal Words: %d", words);
    printf("\nTotal Spaces: %d\n", spaces);

    return 0;
}

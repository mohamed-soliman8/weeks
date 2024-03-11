#include <stdio.h>

int findFirstOccurrence(char str[], char target) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    char inputString[100];
    char targetChar;

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    printf("Enter the character to find: ");
    scanf(" %c", &targetChar);

    int index = findFirstOccurrence(inputString, targetChar);

    if (index != -1) {
        printf("First occurrence of '%c' is at index: %d\n", targetChar, index);
    } else {
        printf("Character '%c' not found in the string.\n", targetChar);
    }

    return 0;
}

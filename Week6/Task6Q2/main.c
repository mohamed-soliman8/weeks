#include <stdio.h>

void countCharacters(char str[]) {
    int alphabets = 0, digits = 0, specialChars = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    countCharacters(inputString);

    return 0;
}

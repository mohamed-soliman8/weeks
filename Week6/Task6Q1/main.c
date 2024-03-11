#include <stdio.h>

void convertToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char inputString[100];

    printf("Enter a string in lowercase: ");
    scanf("%s", inputString);

    convertToUpper(inputString);

    printf("String in uppercase: %s\n", inputString);

    return 0;
}

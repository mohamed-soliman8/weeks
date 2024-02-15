#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int login(char username[], char password[]) {

    const char validUsername[] = "123456789";
    const char validPassword[] = "Mohameds1562004";


    if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char inputUsername[20];
    char inputPassword[20];

    printf("Enter username: ");
    scanf("%s", inputUsername);

    printf("Enter password: ");
    scanf("%s", inputPassword);

    if (login(inputUsername, inputPassword)) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Please check your credentials.\n");
    }

    return 0;
}

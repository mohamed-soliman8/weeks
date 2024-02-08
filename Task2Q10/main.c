#include <stdio.h>
#include <stdlib.h>

int main()
{
 const char correctID[] = "112233446699";
const  char correctPassword[] = "mosoliman1562004";

    char enteredID[20];
    char enteredPassword[20];

    printf("Enter your ID: ");
    scanf("%s", enteredID);


    if (strcmp(enteredID, correctID) == 0)
        {
        int numtry;

        for (numtry = 0; numtry < 3; numtry++)
            {
            printf("Enter your password (num try %d): ", numtry+ 1);
            scanf("%s", enteredPassword);

            if (strcmp(enteredPassword, correctPassword) == 0)
                {
                printf("Welcome!\n");
                break;
            } else {
                printf("You are not registered. Try again.\n");
            }
        }

        if (numtry == 3) {
            printf("No more tries.\n");
        }
    } else {
        printf("You are not registered.\n");
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 4


struct Student {
    int id;
    float grades[NUM_SUBJECTS];
};


void generateRandomGrades(struct Student *student) {
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        student->grades[i] = (float)(rand() % 101);
    }
}


void displayStudentGrades(const struct Student *student) {
    printf("Student ID: %d\n", student->id);
    printf("Grades:\n");
    printf("Programming: %.2f\n", student->grades[0]);
    printf("Data Structures: %.2f\n", student->grades[1]);
    printf("Discrete Math: %.2f\n", student->grades[2]);
    printf("Algorithms: %.2f\n", student->grades[3]);
}

int main() {
    srand(time(NULL));


    struct Student students[NUM_STUDENTS];


    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].id = 1000 + i;
        generateRandomGrades(&students[i]);
    }


    int studentID;
    printf("Enter student ID to view grades: ");
    scanf("%d", &studentID);


    int found = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].id == studentID) {
            displayStudentGrades(&students[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", studentID);
    }

    return 0;
}

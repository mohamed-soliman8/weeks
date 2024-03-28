#include <stdio.h>


struct Employee {
    float salary;
    float bonus;
    float deductions;
};

int main() {

    struct Employee mohsen, maged, mariam;


    printf("Enter salary, bonus, and deductions for Mohsen: ");
    scanf("%f %f %f", &mohsen.salary, &mohsen.bonus, &mohsen.deductions);

    printf("Enter salary, bonus, and deductions for Maged: ");
    scanf("%f %f %f", &maged.salary, &maged.bonus, &maged.deductions);

    printf("Enter salary, bonus, and deductions for Mariam: ");
    scanf("%f %f %f", &mariam.salary, &mariam.bonus, &mariam.deductions);


    float total_salary = mohsen.salary + maged.salary + mariam.salary;
    float total_bonus = mohsen.bonus + maged.bonus + mariam.bonus;
    float total_deductions = mohsen.deductions + maged.deductions + mariam.deductions;


    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Total bonus: %.2f\n", total_bonus);
    printf("Total deductions: %.2f\n", total_deductions);

    return 0;
}

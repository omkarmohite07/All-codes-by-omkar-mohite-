//NAME:OMKAR MOHITE
//PRN:2503033111372L002
//TITLE:GRADE PROGRAM BY SWITCH CASE




#include <stdio.h>

int main() {
    int marks;

    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);

    // 1. Validate the input FIRST before doing any math
    if (marks < 0 || marks > 100) {
        printf("Invalid Marks\n");
        return 1; 
    }

    // 2. Use switch-case for the validated ranges
    switch (marks / 10) {
        case 10: // Triggers exactly when marks == 100 due to the check above
        case 9:
            printf("Grade A+\n");
            break;
            
        case 8:
        case 7:
            printf("Grade A\n");
            break;
            
        case 6:
        case 5:
            printf("Grade B\n");
            break;
            
        default: // Covers 0 to 49 (cases 0, 1, 2, 3, 4)
            printf("Grade C\n");
            break;
    }

    printf("Thank You!\n");
    return 0;
}

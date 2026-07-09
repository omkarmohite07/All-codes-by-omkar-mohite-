//NAME:OMKAR MOHITE
//PRN:2503033111372L002
//TITLE: FUNCTION BASIC MATHS

 


#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
float divi(int a, int b) {
    return (float)a / b;
}
int main() {
    int a, b, choice;
    float ans;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    // Cleaned up if-else chain
    if (choice == 1) {
        ans = add(a, b);
    } 
    else if (choice == 2) {
        ans = sub(a, b);
    } 
    else if (choice == 3) {
        ans = mul(a, b);
    } 
    else if (choice == 4) {
        // Handle division by zero safely
        if (b == 0) {
            printf("Error: Division by zero\n");
            return 1; // Exit program with error code
        } else {
            ans = divi(a, b);
        }
    } 
    else {
        printf("Invalid Input\n");
        return 1; // Exit program for invalid menu choice
    }

    // This will now only print if a valid operation (1-4) took place successfully
    printf("The Answer is %.2f\n", ans);

    return 0;
}

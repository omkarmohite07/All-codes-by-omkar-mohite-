
//NAME:OMKAR MOHITE
//PRN:2503033111378L002
//TITLE:FACTORIAL OF NUMBER

#include <stdio.h>

int main() {
    int i;
    int n;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i; // Fixed capitalization
    }

    printf("Factorial of %d is %d\n", n, fact); // Fixed capitalization
    return 0;
}

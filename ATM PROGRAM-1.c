//NAME:OMKAR MOHITE
//PRN:2503033111372L002
//TITLE:ATM PROGRAM




#include <stdio.h>

int main() {
    int pin;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1317) {
        printf("PIN is Correct. Access Granted.\n");
    } else {
        printf("Incorrect PIN. Access Denied.\n");
    }

    return 0;
}

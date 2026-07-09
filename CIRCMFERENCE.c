//NAME:OMKAR MOHITE
//PRN:2503033111372L002


#include<stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number % 2 == 0) {
        printf("Number is Even\n");
    } 
    else {
        printf("Number is Odd\n");
    } // This closes the else block
    
    return 0;
} // This closes the main function

//NAME:OMKAR MOHITE
//PRN:2503033111372L002
//TITLE: FACTORIAL USING RECURSION




#include <stdio.h>

int fact(int n); // Function declaration

int main() {
    int n, ans;
    
    printf("Enter number:\t");
    scanf("%d", &n);
    
    ans = fact(n); // Function calling
    
    printf("Answer is %d", ans);
    return 0;
}

// Function definition
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * fact(n - 1);
    }
}

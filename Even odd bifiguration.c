/*Name- Omkar Nandakishore Mohite 
\\PRN No- 2503033111372L002*/

#include <stdio.h>

int main() {
    // b[10] is removed as it's declared but never used
    int a[10], even[10], odd[10], e = 0, o = 0, i;

    // Taking 10 integer inputs from the user
    for(i = 0; i < 10; i++) {
        printf("Enter value at index %d:\t", i);
        scanf("%d", &a[i]);
    }

    // Separating even and odd numbers
    for(i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    // Printing the even numbers
    printf("\nEVEN no:\t");
    for(i = 0; i < e; i++) {  // Changed loop condition to i < e
        printf("%d\t", even[i]);
    }

    // Printing the odd numbers
    printf("\nODD no:\t");
    for(i = 0; i < o; i++) {  // Changed loop condition to i < o
        printf("%d\t", odd[i]);
    }

    printf("\n");
    return 0;
}

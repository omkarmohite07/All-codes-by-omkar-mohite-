/*Name- Omkar Nandakishore Mohite 
\\PRN No- 2503033111372L002*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter A Number: ");
    scanf("%d",&num);
//check whether the number is even or odd
    if(num%2 == 0){
        printf("Number is Even"); 
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}
/*Name- omkar Nandkishor Mohite
PRN No- 2503033111372L002 */
#include <stdio.h>
int main(){
    int pin=1107,enterpin;
    printf("Enter Pin: ");
    scanf("%d",&enterpin);
    
    if(enterpin==pin){
        printf("correct Pin\n Enter Amount: ");
    }
    else {
        printf("incorrect pin");
    }
    return 0;
}
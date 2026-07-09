/*name: Omkar mohite
   PRN:2503033111372L002
   branch: electronic and telecommunication (regional)
   batch:A
   title: addition of frist 10 number
   */






#include<stdio.h>
int main(){
int i,temp=0,dig;

printf("enter number\t");	
	scanf("%d", &dig);
	for (i=1;i<=dig;i++){
	temp=temp+i;
}
	
	printf("the addition of frist 5 number is \t%d",temp);
	return 0;
}


/*name: Omkar mohite
   PRN:2503033111372L002
   branch: electronic and telecommunication (regional)
   batch:A
   title: fibonacci series
   */


#include<stdio.h>
int main(){
int i=1,pn=0,cn=1,nn=pn+cn,num;
printf("enter number\t");
scanf("%d", &num);
	printf("fabonacci series:");
	for (i=0;i<=num;i++){
	printf("\n%d\t",cn);
	nn=pn+cn;
	pn=cn;
	cn=nn;
	 
	}
	
	return 0;
	
}

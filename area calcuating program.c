
/* name: omkar mohite 
  prn.no: 2503033111372L002
  branch: electronic and tyelecommunication (regional)
  batch: A
  title: finding area and perimeter of a rectangle
  */



#include<stdio.h>
int main(){
	int  breath,width,area,perimeter;
	printf("enter the breath:\t");
	scanf("%d",& breath);
	printf("enter the width:\t");
	scanf("%d",& width);
	area=breath*width;
	printf("area is %d",area);
	perimeter=2*(breath+width);
	printf("perimeter is %d",perimeter);
	return 0;
}

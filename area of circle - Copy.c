#include<stdio.h>
int main(){
	float  radius,area,circumference,pai;
	printf("enter the radius:\t");
	scanf("%f",& radius);
	printf("enter the pai:\t");
	scanf("%f",&pai);
	area=pai*radius*2;
	printf("area is %f",area);
	circumference=2*pai*radius;
	printf("circumference is %d",circumference);
	return 0;
}

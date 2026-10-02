#include<stdio.h>
#define pi 3.14
int main(){
	float radius,area,circumference ;
	
	printf("Enter value of radius:");
	scanf("%f",&radius);
	
	area = pi*radius*radius;
	printf("\nArea of the circle: %.3f\n",area);
	
	circumference = 2*pi*radius;
	printf("\nCircumference of the circle:%.3f\n",circumference);
	
return 0;
}


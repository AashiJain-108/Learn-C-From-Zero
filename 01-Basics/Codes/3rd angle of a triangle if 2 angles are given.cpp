#include<stdio.h>
int main(){
	float angle1,angle2,angle3;
	
	printf("Enter first angle: ");
	scanf("%f",&angle1);
	
	printf("Enter second angle: ");
	scanf("%f",&angle2);
	
	angle3 = 180-(angle1+angle2);
	printf("Third angle is:%.2f",angle3);

return 0;
}


#include<stdio.h>
int main(){
	float meter,feet,inches,centimeter,km;
	
	printf("Enter distance(in km): ");
	scanf("%f",&km);
	
	meter = km*1000;
	centimeter = meter *100;
	feet = 3.28084 * meter;
	inches = 12*feet;
	
	printf("The distance in meter = %f\n",meter);
	printf("The distance in centimeter = %f\n",centimeter);
	printf("The distance in feet = %f\n",feet);
	printf("The distance in inches = %f\n",inches);

return 0;
}


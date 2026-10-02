#include<stdio.h>
int main(){
	float length,breadth;
	printf("Enter length: ");
	scanf("%f",&length);
	
	printf("Enter breadth: ");
	scanf("%f",&breadth);
	
	printf("The area of rectangle is : %f\n",length*breadth);
	printf("The perimeter of rectangle is : %f",2*(length+breadth));

return 0;
}


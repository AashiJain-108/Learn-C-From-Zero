#include<stdio.h>
int main(){
	float principal,rate,time;
	principal = 1000;
	rate = 5;
	time = 2;
	
	float simple_interest = (principal*rate*time)/100;
	printf("\nsimple interest is: %.2f\n",simple_interest);
	

return 0;
}


#include<stdio.h>
int main(){
	int x,y,z,avg;
	printf("Enter value of 1st no:");
	scanf("%d",&x);
	
	printf("Enter value of 2nd no:");
	scanf("%d",&y);

	printf("Enter value of 3rd no:");
	scanf("%d",&z);
	
	avg = (x+y+z)/3;
	printf("Average of 3 nos is: %d\n ",avg);
return 0;
}


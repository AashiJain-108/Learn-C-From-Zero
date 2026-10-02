#include<stdio.h>
int main(){
	int tot_mins,hrs,mins;
	const int Minutes_in_Hour = 60;
	
	printf("Input minutes: ");
	scanf("%d",&tot_mins);
	
	hrs = tot_mins/Minutes_in_Hour;
	mins = tot_mins%Minutes_in_Hour;
	
	printf("%d Hours,%d Minutes \n",hrs,mins);

return 0;
}


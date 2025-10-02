/*
name:peter
reg:CT100/G/26164/25
desc:water bill
*/
#include <stdio.h>

int main()
{
	int water_units,bill;
	float total_bill;
	printf("enter water_units consumed \n");
	scanf("%d" ,  & water_units);
	
	if(water_units <30){
		bill=water_units *20;
	}
	else if(water_units<=60) {
		bill=(water_units -30)*25+(30*20);
	}
	else if(water_units>=60){
		bill=(water_units -60)*30 +(30*20);
	}
	
	total_bill=(20*30)+(water_units -30)*25+(water_units -60)*30;
	
	printf("total_bill %.2f kes \n", total_bill);
	


	return 0;
}
/*
name:peter
reg:CT100/G/26164/25
desc:final exam eligibility
*/
#include <stdio.h>

int main(){
	          int attended_classes,total_classes;
	          float percentage,average_marks;
	          
	          printf("enter attended_classes \n");
	          scanf("%d" ,    &attended_classes);
	          
	          printf("enter total_classes \n");
	          scanf("%d" ,    &total_classes);
	          
	          //percentage calculation;
	          percentage=((float)attended_classes/total_classes)*100;
	          
	          printf("enter average_marks \n");
	          scanf("%f" ,    &average_marks);
	          
	          if(percentage >=75  && average_marks  >=40) {
	          
	          	printf("you are eligible for final exam \n");
	          }
	            
	     else {
	             
	             printf("you are not eligible for final exam \n");
	        } 
	
	return 0;
}
#include <stdio.h>
int main(){
	
	int age;
	printf("Enter the Number");
	scanf("%d", &age);
	
	switch(age){
		
		case 20:{
			printf("I can vote");
			break;
		}
		
		case 17:{
			printf("I cant Vote");
			break;
		}
		
		case 18:{
			printf("I can Vote from next time");
			break;
		}
		default: 
		    printf("Vote For BJP");
		    break;
		
	}
	
return 0;	
}

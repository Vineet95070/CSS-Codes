#include <stdio.h>
int main(){
	
	int num, fac=1;
	printf("Enter the Number : ");
	scanf("%d", &num);
	
	while(num != 1){
	
	  fac = num*fac;
	  num--;
	  
    }
    
    printf("The factorial is %d :", fac);
	
return 0;	
}

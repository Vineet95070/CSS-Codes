#include <stdio.h>
int main(){
	
	int a, b, c, d=1;
	
	printf("Enter the Number : ");
	scanf("%d%d", &a, &b);
	
	while(a%d==0 && b%d==0){
		
		c=d;
		d++;
	}
	
	printf("HCF of %d and %d is %d :", a, b, c);
	
	
return 0;	
}

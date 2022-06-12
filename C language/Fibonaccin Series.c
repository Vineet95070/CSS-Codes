#include <stdio.h>
int main(){
	
	int n, i, a=0, b=1, c;
	
	printf("Enter the limit of Fibonacci Series : ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
	
	    printf("%d\t", a);
		
		c= a+b;	
		a=b;
		b=c;
		
	
	}
	
	
return 0;	
}

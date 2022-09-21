#include <stdio.h>
int change(int* x, int* y){
	
	int temp;
	
	temp= *x;    // temp=5
	*x= *y;   //x= 4
	*y= temp;   //y=5

return 0;	
}

int main(){
	
	int a, b;
	printf("Enter first and Second Number : ");
	scanf("%d%d", &a, &b);    //a=5, b=4
	printf("%d and %d\n", a, b);
	
	change(&a,&b);            //Passing value of function
	printf("%d and %d", a, b);

return 0;	
}


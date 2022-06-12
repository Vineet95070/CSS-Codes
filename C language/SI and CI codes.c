#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	
	float P, R, T, SI, CI, A;
	printf("Enter the Principle value : ");
	scanf("%f", &P);
	
	printf("Enter the Rate : ");
	scanf("%f", &R);
	
	printf("Enter the Time : ");
	scanf("%f", &T);
	
	SI=(P*T*R)/100;
	
	A=P*(pow((1+R/100),T));
	
	CI=A-P;
	
	printf("Simple Intrest is : %f\n", SI);
	
	printf("Compound Intrest is : %f", CI);
	
	
	
	
	
return 0;	
}

//Name :- Vineet Kr Chaubey
//Roll No :- bcah1ca21036

#include <stdio.h>
#include <math.h>
int main(){
	
	int x,b,a,c,z,y,x1,x2;
	
	printf("Enter a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);
	
	
	x=b*b-4*a*c;
	y=2*a;
	z=sqrt(x);
	
	x1= (-b+z)/y;
	x2= (-b-z)/y;
	
	printf("First root is %d and second one is %d :", x1, x2);
	
	
return 0;	
}

#include <stdio.h>
int main(){
	
	//Reversing program using Strrev() function
	
	char a[10];
	printf("Enter your Name : ");
	scanf("%s", &a);
	printf("%s\n", a);
	
	strrev(a);
	
	printf("%s\n", a);
	
return 0;	
}

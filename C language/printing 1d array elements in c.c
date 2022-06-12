#include <stdio.h>
int main(){
	
	int i, arr[10];           //Array Declaration.
	for(i=0; i<=9; i++){      //For loop for taking the elements of Array.
		
		printf("Enter the Array Element arr[%d]: ", i+1);
		scanf("%d", &arr[i]);               
	}
	for(i=0; i<=9; i++){     //Another for Loop is for print the Array Elements.
		
		printf("arr[%d]= %d\t",i+1, arr[i]);
	}
	
	
return 0;	
}

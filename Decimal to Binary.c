#include <stdio.h>

int main(){
	
	int i,j,num;
	int arr[10];
	
	printf("Enter the Number : ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		
		arr[i]=num%2;
		num=num/2;
	}
	printf("-----Binary Conversion-----");
	
	for(j=i-1; j>=0; j--){
		
		printf("%d", arr[j]);
	}
	
	
return 0;	
}

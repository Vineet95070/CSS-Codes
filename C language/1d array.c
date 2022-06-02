#include <stdio.h>

int main(){
	
	int ar[10]= {2 ,3 ,4 ,2 ,4 ,23 ,3 ,4 ,5 ,2 };
	int i;
	
	
	for(i=0; i<10; i++){
		
		printf("%d", ar[i]);
	
	}
	printf("\n");
	
	for(i=9; i>=0; i--){
		
		printf("%d", ar[i]);
	}
	
	
return 0;	
}

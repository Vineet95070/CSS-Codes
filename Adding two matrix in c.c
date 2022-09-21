#include <stdio.h>
int main(){
	
	int i, j, arr1[2][3], arr2[2][3];
	printf("Enter the Elements of 1st, 2x3 Matrix : ");
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			scanf("%d", &arr1[i][j]);
		}
	}
	
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			printf("%d\t", arr1[i][j]);
		
		if(j==2){
			printf("\n");}
		}
	}
	
	printf("Enter the Elements of 2nd, 2x3 Matrix : ");
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			printf("%d\t", arr2[i][j]);
		
		if(j==2){
			
			printf("\n");}
		}
	}
	
	printf("Sum of both matrix is  : \n");
	
	for(i=0; i<2; i++){
		
		for(j=0; j<3; j++){
			
			printf("%d\t", arr1[i][j]+arr2[i][j]);
		
		if(j==2){
			printf("\n");
		}
		}
	
	}
	
	
return 0;	
}

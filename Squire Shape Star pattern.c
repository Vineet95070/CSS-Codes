#include <stdio.h>
int main(){

    int row, coll;
    scanf("%d%d", &row, &coll);

    for(int i=1; i<=row; i++){

        for(int j=1; j<=coll; j++){

            printf("*");
        }
    
    printf(" \n");
    }

return 0;    
}

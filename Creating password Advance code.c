#include <stdio.h>
int main(){
    
    int i;
    printf("Create Your Password. And it should be a Degits Only\n");

    scanf("%d", &i);

    printf("Your Password is Created Sucessfully \nIf you want to open the file then say 1, otherwise say 0 ! \n");
    int k;
    scanf("%d", &k);

    if(k==1){

        printf("First Enter Your Password \n");
    }

    int j;
    scanf("%d",&j);

        if(j==i){

            printf("Welcome");
        }
            
          else{printf("Incorrect Password");}  


    


return 0;    
}

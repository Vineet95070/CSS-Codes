#include <stdio.h>

int main(){

    int age;

    printf("What is Your age?\n");

    scanf("%d", &age);

    if(age<18){

        printf("You can't Vote");
    }

    else if(age>18){

        printf("You can Vote");
    }

    else{printf("You can Vote for kids");}



return 0;    
}

#include <stdio.h>


int  numPrint(int);
int main()
{
    int n = 1;
	printf("First 50 natural numbers :\n");
    printf("\n\n");
    numPrint(n);
    
    
return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}

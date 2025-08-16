#include <stdio.h>

int main() 
{
    int x;
    printf("Enter x ");
    scanf("%d", &x); 


    (x>0) 
    ? printf("%d positive\n", x) 
    :(x<0)? printf("%d negative\n", x):
    printf("%d zero\n",x);
    	
}

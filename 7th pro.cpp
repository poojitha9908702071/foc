#include <stdio.h>  
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=1; i<=n; i+=2)  
    {  
        sum =sum+1;
    }  
    printf("Sum of all odd numbers from 1 to %d: %d", n, sum);  
    return 0;  
}
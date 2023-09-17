#include<stdio.h>

int main()
{

    int num ;
    printf("Enter a Number to get its factor of numbers = ") ;
    scanf("%d", &num) ;     

    int a, tn = 0 ;

    if(num<1)
    {
        printf("Enter a valid number 1 or more than 1. \n") ;
        return 0 ;
    }

    for(a = 1 ; a <= num/2 ; a++)
    { 
        if(num%a==0)
        {
        printf("%d, ", a) ;
        tn++ ;
        }
    }
    printf("%d ", num) ;
    printf("\n") ;
    
    printf("Total Factor of Number = %d \n", ++tn) ;
    
    return 0 ;
}
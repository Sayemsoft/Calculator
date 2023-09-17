#include<stdio.h>
#include<math.h>

int main()
{

    int a ;
    printf("Enter a number to check prime or not = ") ;
    scanf("%d", &a) ;

    int i ;

    int af = sqrt(a)+1 ;   

    if(a <= 1 )
    {
        printf("Its not a prime number. \n1 or less than 1 is not prime number.") ;
        return 0 ;
    }
    

    for(i = 2 ; i <= af ; i++)
    {
        if(a%i==0)
        {
        printf("%d is not Prime Number. \nBecause %d is divide by %d. \n", a, a, i) ;       
        return 0 ;
        }
        
    }

    printf("Its Prime Number. \n") ;

    return 0 ;
}
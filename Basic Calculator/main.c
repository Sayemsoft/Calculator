// code is complate

#include <stdio.h>

int main ()
{
    double a, b ;
    char c ;
    
    printf ("Calculator : Use this formate - exmple : 2 + 2 and click on Enter. \n\n\n") ;
    scanf ("%lf %c %lf", &a, &c, &b) ;
    printf ("\n") ;
    
    switch (c)
    {
    case '+':
        printf ("Result = %.2lf", a+b) ;
        /* code */
        break;
    
    case '-': 
        printf ("Result = %.2lf", a-b) ;
        break ;

    case '*':
        printf ("Result = %.2lf", a*b) ;
        break ;

    case '/': 
        printf ("Result = %.2lf", a/b) ;
        break ;
    
    default:
        printf ("Your entred is wrong.") ;
        break;
    }

    return 0 ;
}
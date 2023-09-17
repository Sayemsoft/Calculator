/* add all fib sum */
	
#include<stdio.h>

int fibonocci(int n) ;

int main()
{
	int n ;
  
	printf("Enter number = \n\n") ;
	scanf("%d", &n) ;

	fibonocci(n);
	
	return 0 ;
}

int fibonocci(int n) 
{
	int fib[n] ;
	fib[0] = 0 ;
	fib[1] = 1 ;

 	for(int i = 2 ; i < n ; i++)
	{
		fib[i] = fib[i-1]+fib[i-2] ;
		printf("%d\t", fib[i]) ;
	}

}
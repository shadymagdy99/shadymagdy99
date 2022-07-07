/***************************************************************************/
/*File Name : task3.c                                                     */
/*File Info :C program of a recursion function that calculate factorial  */                                  
/*Date : 7 july 2022                                                    */
/*Author: Shady Magdy Hussein                                          */
/*Vesrsion : 01                                                       */
/*********************************************************************/
#include <stdio.h>
int x , y  , ret;
int i =1; // counter
int result = 1 ; // we intialize it by 1 because we calculate factorial
int Fact_func(int u);
void main (void) {
	printf ("Enter The number : ");
	scanf("%d", &x);
	y = Fact_func (x) ; // store the return from the function
	printf ("The Factorial = %d ", y); // print factorial
}
//this recursion function calculate factorial
int Fact_func (int u) {
if ( i <= u ){
	result *= i ;
	i ++ ;
	ret = Fact_func (u) ;
}
else {
	ret = result ;
}
return ret ;
}
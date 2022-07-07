/***************************************************************************/
/*File Name : task2.c                                                     */
/*File Info :C program using nested loops to print the following shape   */                                  
/*Date : 7 july 2022                                                    */
/*Author: Shady Magdy Hussein                                          */
/*Vesrsion : 01                                                       */
/*********************************************************************/
#include <stdio.h>
int rows ; // number of rows
int i , c ; // counters
void main (void) {
	printf("Please Enter The number of Rows : ");
	scanf("%d", &rows);
	/*This for loop prints the required shape*/
for (i = 1 ; i <= rows ; i++){
	for(c=1 ; c <= i ; c++){
		printf("*");
	}
	printf("\n");
}
}
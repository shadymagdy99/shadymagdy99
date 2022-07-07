/**************************************************************/
/*File Name : task1.c                                        */
/*File Info :c program to Find the Frequency of characters   */                                  
/*Date : 7 july 2022                                         */
/*Author: Shady Magdy Hussein                                */
/*Vesrsion : 01                                             */
/***********************************************************/
#include <stdio.h>
unsigned char arr [40] ;
unsigned char check ; //this variable checks the frequency
int freq ; //this variable is the frequency 
int i ;
void main (void){
	printf("Please Enter The String : ");
	gets(arr);  // store the string in the array
	printf("Enter the character to get it's frequency :  ");
	scanf("%c", &check); // take the character to find it's frequency
	/* this for loop checks if the selected character is repeated and counts the repetition to find frequency*/
for (i = 0 ; i < 40 ; i ++){
if (check == arr [i]){
	freq += 1 ;	
}
else if (arr [i] == 0) {
	break ;	
}
}
	printf("The frequency is : %d",freq);
}
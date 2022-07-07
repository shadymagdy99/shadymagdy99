/**************************************************************************************************************/
/*File Name : task1_v2.c                                                                                     */
/*File Info :c program to Find the Frequency of characters (Better solution as mentioned in the last lecture)*/                                  
/*Date : 7 july 2022                                                                                        */
/*Author: Shady Magdy Hussein                                                                               */
/*Vesrsion : 02                                                                                            */
/*In this version I used while loop which is more accurate because wh don' know the string length          */
/**********************************************************************************************************/
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
	/* this While loop checks if the selected character is repeated and counts the repetition to find frequency*/
while (arr [i] != 0){
	if (check == arr [i]){
		freq += 1 ;	
	}
	else {}
	i++ ;
	}
	printf("The frequency is : %d",freq);
}
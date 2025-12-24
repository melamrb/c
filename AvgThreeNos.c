/*
 * File: AvgThreeNos.c
 * Author: Raj
 * Date: December 24, 2025
 * Description: 
 * This program calculates the average of any given three numbers. 
 */

#include<stdio.h>
#include<conio.h>

#define INIT_VAL_0 0

#define TRUE 0
#define FALSE 1

#define SUCCESS 0
    
int main(void) 
{
    int FirstNumber_u16  = INIT_VAL_0;
    int SecondNumber_u16 = INIT_VAL_0;
    int ThirdNumber_u16  = INIT_VAL_0;

    int AvgThreeNos_u16  = INIT_VAL_0; 
    
    printf("Enter any three numbers(with spaces in between the numbers) to find out the average of them : \n ");
    scanf("%d %d %d", &FirstNumber_u16, &SecondNumber_u16, &ThirdNumber_u16);
    
    AvgThreeNos_u16 = ((FirstNumber_u16+SecondNumber_u16+ThirdNumber_u16)/3);
    
    printf("\n Average of the numbers %d %d %d is %d",FirstNumber_u16, SecondNumber_u16, ThirdNumber_u16, AvgThreeNos_u16);
    
    getch();
    
    return SUCCESS;
}

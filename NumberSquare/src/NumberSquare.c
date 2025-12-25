/*****************
Name: WAP to find square of a given number
******************/
#include<stdio.h>
#include<conio.h>

int main(void) 
{
    int Number_u16 = 0;
    int NumSquare_u16 = 0; // Datatype couldn't contain square of int for bigger numbers. To be improved
    
    printf("Enter any number to find out the sqaure of it : \n ");
    scanf("%d", &Number_u16);
    
    NumSquare_u16 = (Number_u16*Number_u16);
    
    printf("\nSquare of entered number is :%d",NumSquare_u16);
    
    getch();
    
    return 0;
}

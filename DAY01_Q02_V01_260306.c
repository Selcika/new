/*
 ============================================================================
 Name        : DAY01_Q02_V01_260306.c
 Author      : selcika
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Check the year is leap year or not.

#include<stdio.h>

int main()
{
    int year;
    year=2100;

    if((year%4==0 && year%100!=0) || (year%400==0))
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);

    return 0;
}

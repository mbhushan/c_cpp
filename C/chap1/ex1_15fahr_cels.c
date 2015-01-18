/*
 * =====================================================================================
 *
 *       Filename:  ex1_15fahr_cels.c
 *
 *    Description:  Print Fahrenheit Celsius table
 *
 *        Version:  1.0
 *        Created:  Sunday 18 January 2015 06:45:18  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

float celsius(float fahr);

int main() {

    float fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, celsius(fahr));
        fahr += step;
    }
    return 0;
}

/* celsius: convert fahr to celsius */
float celsius(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}



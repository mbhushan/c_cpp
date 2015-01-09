/*
 * =====================================================================================
 *
 *       Filename:  fahr_cel.c
 *
 *    Description:  Prints Fahrenheit to Celsius table
 *
 *        Version:  1.0
 *        Created:  Friday 09 January 2015 09:25:59  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main() {
    float fahr, celsius;
    int low, high, step;
    low = 0;
    high = 300;
    step = 20;

    fahr = low;
    while (fahr <= high) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.2f \n", fahr, celsius);
        fahr += step;
    }
    return 0;
}


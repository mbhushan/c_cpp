/*
 * =====================================================================================
 *
 *       Filename:  fahr_cel2.c
 *
 *    Description:  fahrenheit to celsius converter using # define :)
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 10:40:35  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*  print Fahrenheit-Celsius table */
int main() {
    int fahr;
    float cel;
    for (fahr=LOWER; fahr <= UPPER; fahr += 20) {
        cel = (5.0/9.0) * (fahr - 32);
        printf("%3d \t %6.3f\n", fahr, cel);
    }
    return 0;
}


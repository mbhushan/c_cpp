/*
 * =====================================================================================
 *
 *       Filename:  cel_fahr.c
 *
 *    Description:  Celsius to Fahrenheit converter
 *
 *        Version:  1.0
 *        Created:  Friday 09 January 2015 09:42:56  IST
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
    int cel;
    float fahr;
    for (cel=0; cel <= 300; cel += 20) {
        fahr = ((9.0 * cel)/5.0) + 32;
        printf("%3d \t %6.2f\n", cel, fahr);
    }
    return 0;
}


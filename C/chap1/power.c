/*
 * =====================================================================================
 *
 *       Filename:  power.c
 *
 *    Description:  raises base to nth power: n >= 0
 *
 *        Version:  1.0
 *        Created:  Sunday 18 January 2015 06:36:21  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int power(int m, int n);

/* test power function */
int main() {
    int i;
    for (i=0; i<10; i++) {
        printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

/* power - raise base to nth power: n >= 0 */
int power(int base, int n) {
    int i, p;
    p = 1;
    for (i=1; i<=n; i++) {
        p = p * base;
    }
    return p;
}


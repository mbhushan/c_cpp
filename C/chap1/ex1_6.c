/*
 * =====================================================================================
 *
 *       Filename:  ex1_6.c
 *
 *    Description:  verifying expression getchar != EOF is 0 or 1
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 11:04:50  IST
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

    int val = (getchar() != EOF);
    int c;

    printf ("Value is: %d\n", val);
    while (c = getchar() != EOF) {
        printf ("%d\n", c);
    }
    printf ("%d - at EOF\n", c);

    return 0;
}

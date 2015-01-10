/*
 * =====================================================================================
 *
 *       Filename:  inout2.c
 *
 *    Description:  second version of reading input and printing it to output
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 10:54:18  IST
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
    int ch;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}



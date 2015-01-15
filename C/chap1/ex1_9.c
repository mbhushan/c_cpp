/*
 * =====================================================================================
 *
 *       Filename:  ex1_9.c
 *
 *    Description:  Program to copy its input to output - replacing multiple blanks by single blank
 *
 *        Version:  1.0
 *        Created:  Thursday 15 January 2015 12:05:26  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define NONBLANK 'a'

int main() {
    int c, lastc;
    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if ((c == ' ') && (lastc != ' ') ) {
            putchar(c);
        }
        lastc = c;
    }
    return 0;
}



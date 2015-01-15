/*
 * =====================================================================================
 *
 *       Filename:  ex1_12.c
 *
 *    Description:  print input one word per line
 *
 *        Version:  1.0
 *        Created:  Thursday 15 January 2015 02:25:07  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }
    return 0;
}



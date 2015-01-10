/*
 * =====================================================================================
 *
 *       Filename:  line_count.c
 *
 *    Description:  Count the number of lines in input
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 11:30:50  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

/* count lines in input */
int main() {

    int nl, c;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("\nNumber of lines: %d\n", nl);
    return 0;
}


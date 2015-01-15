/*
 * =====================================================================================
 *
 *       Filename:  ex1_10.c
 *
 *    Description:  Replace backspace, tab and backslash with respective characters
 *
 *        Version:  1.0
 *        Created:  Thursday 15 January 2015 02:05:55  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

/* replace tabs and backspaces with visible characters */

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if(c == '\b') {
            printf ("\\b");
        } else if(c == '\\') {
            printf ("\\\\");
        } else {
            putchar(c);
        }
    }
    return 0;
}


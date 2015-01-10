/*
 * =====================================================================================
 *
 *       Filename:  ex1_8.c
 *
 *    Description:  Program to count blanks, tabs and newlines
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 11:36:39  IST
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

    int c, nl, tab, blank;
    nl = tab = blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank;
        } else if (c == '\t') {
            ++tab;
        } else if (c == '\n') {
            ++nl;
        }
    }
    printf ("\nNumber of blanks: %d", blank);
    printf ("\nNumber of tabs: %d", tab);
    printf("\nNumber of newlines: %d\n", nl);

    return 0;
}

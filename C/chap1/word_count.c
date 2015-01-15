/*
 * =====================================================================================
 *
 *       Filename:  word_count.c
 *
 *    Description:  Word count in C - Loose version
 *
 *        Version:  1.0
 *        Created:  Thursday 15 January 2015 11:56:42  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words and characters in input */
int main() {
    int c, nl, nw, nc, state;
    state = OUT;

    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
    printf ("characters: %d\n", nc);
    printf ("words: %d\n", nw);
    printf ("lines: %d\n", nl);

    return 0;
}


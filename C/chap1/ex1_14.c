/*
 * =====================================================================================
 *
 *       Filename:  ex1_14.c
 *
 *    Description:  print histogram of the frequencies of different characters
 *
 *        Version:  1.0
 *        Created:  Sunday 18 January 2015 02:22:55  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15      /* max length of histogram */
#define MAXCHAR 128     /* max different characters */

/* print horizontal histogram of the frequencies of different characters */

int main() {

    int c, i;
    int len;        /* length of each bar */
    int maxvalue;   /* max value for cc[] */
    int cc[MAXCHAR]; /* character counter */

    for (i=0; i<MAXCHAR; ++i) {
        cc[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c < MAXCHAR) {
            ++cc[c];
        }
    }
    maxvalue = 0;
    for (i=1; i<MAXCHAR; ++i) {
        if (cc[i] > maxvalue) {
            maxvalue = cc[i];
        }
    }
    len = 0;
    for (i=1; i<MAXCHAR; ++i) {
        if (isprint(i)) {
            printf("%5d - %c - %5d : ", i, i, cc[i]);
        } else {
            printf("%5d -   - %5d : ", i, cc[i]);
        }
        if (cc[i] > 0) {
            len = (cc[i]*MAXHIST) / maxvalue;
            if ( len <= 0) {
                len = 1;
            }
        } else {
            len = 0;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    return 0;
}

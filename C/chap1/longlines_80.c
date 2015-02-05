/*
 * =====================================================================================
 *
 *       Filename:  longlines_80.c
 *
 *    Description:  print all input lines that are longer than 80 chars
 *
 *        Version:  1.0
 *        Created:  Thursday 05 February 2015 08:36:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define MAXLINE 1000    /* max input line size */
#define LONGLINE 80     /* lower threshold tol filter short lines */

int getLine(char line[], int maxline);

/* print lines longer than the LONGLINE */
int main() {
    int len;    /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > LONGLINE) {
            printf ("%s", line);
        }
    }

    return 0;
}

/* getline: read a line into line and return length */
int getLine(char line[], int maxline) {
    int c, i;
    i = 0;

    for (i=0; i<maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

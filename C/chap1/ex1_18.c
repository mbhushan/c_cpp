/*
 * =====================================================================================
 *
 *       Filename:  ex1_18.c
 *
 *    Description:  remove trailing blanks and tabs from each line of input - delete entirely blank lines
 *
 *        Version:  1.0
 *        Created:  Thursday 05 February 2015 09:07:33  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size */

int getLine(char line[], int maxline);
int removeWhiteSpace(char line[], int size);

/* remove trailing blanks and tabs and delete blank lines */
int main() {
    char line[MAXLINE];     /* current input line */
    int size = 0;

    while ((size = getLine(line, MAXLINE)) > 0) {
        if (removeWhiteSpace(line, size) > 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int removeWhiteSpace(char line [], int size) {
    int i;
    i = size-1;

    while (i >= 0) {
        if (line[i] == '\t' || line[i] == ' ' || line[i] == '\n') {
            --i;
        } else {
            break;
        }
    }
    if (i >= 0) {
        line[++i] = '\n';
        line[++i] = '\0';
    }

    return i;
}

int getLine(char line[], int maxline) {
    int c, i;

    for(i=0; i < (maxline-1) && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}



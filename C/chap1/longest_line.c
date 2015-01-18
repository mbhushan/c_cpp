/*
 * =====================================================================================
 *
 *       Filename:  longest_line.c
 *
 *    Description:  print the longest input line.
 *
 *        Version:  1.0
 *        Created:  Sunday 18 January 2015 07:51:58  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mani Bhushan (), manibhushan.cs@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define MAXLINE 1000    /* maximum input line size  */

int getLine(char s[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main() {
    int len;        /* current line length */
    int max;        /* maximum length seen so far */
    char line[MAXLINE];   /* current input line */
    char longest[MAXLINE];       /* longest line saved so far */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line seen so far:\n");
        printf("%s", longest);
    }

    return 0;
}

/* copy: copy 'from' to 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
    int c, i;
    i=0;
    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/*
 * =====================================================================================
 *
 *       Filename:  char_count.c
 *
 *    Description:  count the number of characters
 *
 *        Version:  1.0
 *        Created:  Saturday 10 January 2015 11:26:08  IST
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
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        ++count;
    }
    printf ("\nChar Count: %d\n", count);

    return 0;
}


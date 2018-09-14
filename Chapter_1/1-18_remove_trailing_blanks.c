/*
 * Exercise 1-18. Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines.
 */

#include<stdio.h>

#define MAXLEN 1000

int get_line(char[], int);

int main(void) {
    char line[MAXLEN];
    int i, len, end;

    while ((len = get_line(line, MAXLEN)) > 0) {
        end = len;
        for (i = len - 2; i >= 0; i--){             // Start loop at len - 2 so we omit the NULL and \newline character
            if (line[i] == ' ' || line[i] == '\t')
                end = i;                            // Continuously runs until there's no more \t's or spaces
            else
                break;
        }

        if (end < len) {                            // Only executed if there was spaces/tabs
            line[end] = '\n';
            line[end + 1] = '\0';
            len = end + 1;
        }
        if (len == 1)                               // check for blank lines so we don't print them
            continue;                               // if end was zero, it must've been blank (end +1)
        
        printf("%2d: %s", end, line);               // Include the length of the line so we can ensure that our trailing whitespace is indeed being removed

    }
    return 0;
}

// Read STDIN into line[] unless it reaches 'MAXLEN'
// Return the length of line[]

int get_line(char line[], int maxlen) {
    int c, len;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (len == maxlen)
            break;
            
        line[len++] = c;
        if (c == '\n')
            break;
    }
    line[len] = '\0';
    return len;
}
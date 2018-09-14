#include<stdio.h>
#define MAXLINE 1000        // Max input line length

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

// Print the longest line

int main(void) {
    int len;                // Current line length
    int max;                // Maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 0) {
            copy(longest, line);
            printf("This line is %d characters:\n", len);
            printf("%s\n", longest);
        }

    }
        return 0;
}

// get_line: read a line into s, return length
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to; assume 'to' is big enough
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
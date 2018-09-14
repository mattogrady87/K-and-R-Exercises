// Exercise 1-19. Write a function reverse(s) that 
// reverses the character string s. Use it to write 
// a program that reverses its input a line at a time.

#include<stdio.h>

#define MAXLEN 1000

int get_line(char line[], int maxline);
void reverse(char s[]);

int main(void) {
    char line[MAXLEN];
    int i, len;

    while ((len = get_line(line, MAXLEN)) > 0){
        reverse(line);
    }

    return 0;
}

int get_line(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}

// reverse: reverse the string 's'. we'll have to figure
// out its length since we're only allowed one paramater

void reverse(char s[]) {
    int i, len;
    for (i = 0; i < MAXLEN; i++){
        if (s[i] == '\0'){
            len = i-2;                              // omit the '\0' and the '\n' from out reversed string
            break;
        }
    }

    for (i = len; i >= 0; i--){
        printf("%c", s[i]);
    }
    printf("\n\n");
}
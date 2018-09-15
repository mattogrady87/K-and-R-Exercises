#include<stdio.h>

#define MAXLEN 1000
#define TABSTOP 4

int get_line_detabber(char[], int);

int main(void) {
    char line[MAXLEN];
    int i, len;

    while ((len = get_line_detabber(line, MAXLEN)) > 0){
        printf("%s", line);
    }

    return 0;

}


int get_line_detabber(char line[], int maxline) {
    int c, i;
    for (i = 0; i < maxline -1 && (c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
        if (line[i] == '\t'){
            for (int j = 0; j < TABSTOP;i++, j++){
                line[i] = ' ';
            }
            i--;                                            // Decrement i one time before exiting loop so we don't skip a character and end up with garbage in output
        }
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}
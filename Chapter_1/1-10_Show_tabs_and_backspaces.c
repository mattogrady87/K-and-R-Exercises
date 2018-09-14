#include<stdio.h>

int main(void) {
    
    int c;

    while ((c = getchar()) != EOF) {

        if (c == '\t'){
            c = '\\';
            putchar(c);
            c = 't';
            putchar(c);
        }

        else if (c == 'p') {
            c = '\\';
            putchar(c);
            c = 'b';
            putchar(c);
        }

        else if (c == '\\') {
            c = '\\';
            putchar(c);
            c = '\\';
            putchar(c);
        }
        else
            putchar(c);



    }

}
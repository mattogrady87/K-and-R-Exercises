#include<stdio.h>

int main(void) {
    int c, nl, bl, tl;

    nl = 0;
    bl = 0;
    tl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++bl;
        else if (c == '\t')
            ++tl;

    printf("Newlines: %d\n", nl);
    printf("Tabs: %d\n", tl);
    printf("Blanks: %d\n", bl);

}
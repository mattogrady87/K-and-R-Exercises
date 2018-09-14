#include<stdio.h>

int main(void) {

    int c;
    int check = 0;

    while((c = getchar()) != EOF){

        if (c == ' ') {
            if (check != 1){
                putchar(c);
                check = 1;
            }
        }

        else {
            putchar(c);
            check = 0;
        }

    }

}
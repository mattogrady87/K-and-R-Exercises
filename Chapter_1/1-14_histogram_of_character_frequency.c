// Exercise 1-14. Write a program to print a histogram of 
// the frequencies of different characters in its input.


#include<stdio.h>

int main(void) {
    int c, i;
    int nletter[26];

    for (i = 0; i < 26; i++)
        nletter[i] = 0;
    

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z'){
            ++nletter[c-97];
        }
    }
    
    printf("\nHistogram of frequencies of letters typed:\n");
    for (i = 0; i < 26; i++){
        if (nletter[i] > 0){
            printf("%c:", i+97);

            for (int j = 0; j < nletter[i]; j++)
                printf("|");
            printf("\n");
        }
    }

}
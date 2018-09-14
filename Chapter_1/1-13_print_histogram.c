#include<stdio.h>

// Exercise 1-13. Write a program to print a histogram of the lengths 
// of words in its input. It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.

#define MAX 21

int main(void) {
    int c, i;
    int nc = 0;
    int ndigit[MAX];

    for (i = 0; i <= MAX; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c != '.' && c != ',' && c != '!')
            nc++;

        if (c == ' ' || c == '\n'){
            nc--;
            if (nc < MAX)
                ndigit[nc]++;
            nc = 0;
        }
    }
    
    printf("\nHistogram of occurences of word lengths from 1 - 20:\n");
    for (i = 1; i < MAX; i++){
        if (ndigit[i] > 0){
            printf("%d:", i);

            for (int j = 0; j < ndigit[i]; j++)
                printf("|");
            
            printf("\n");
        }


        
    }
    printf("\n");
}
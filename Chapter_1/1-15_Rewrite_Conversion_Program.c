// Exercise 1.15. Rewrite the temperature conversion program of 
// Section 1.2 to use a function for conversion.

#include<stdio.h>

int temp_table(int lower, int upper, int step);

int main(void) {
    int check;
    check = temp_table(0, 300, 20);

    if (check == 0)
        printf("Successfully printed\n");
    else
        printf("Did not print correctly\n");
}

int temp_table(int lower, int upper, int step) {
    int fahr, celsius;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
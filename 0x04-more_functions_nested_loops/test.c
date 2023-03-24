#include <stdio.h>
/**
 * main - Edit 
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
    int i, j;

    for (j = 0; j < 10; j++) { // repeat 10 times
        for (i = 0; i < 15; i++) { // print numbers from 0 to 14
            if (i > 9) { // if the number has 2 digits
                putchar('0' + i / 10);
            }
            putchar('0' + i % 10);// print the ones digit
            putchar(48 + i %10 );
            putchar(48 + i / 10);
        }
        putchar('\n'); // print a new line
}
	return (0);
}

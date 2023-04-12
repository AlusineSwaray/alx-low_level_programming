#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int x = 1;

    int *ptr = &x;
    int *qpr;
    qpr = ptr;

    *qpr = 5;

    printf("value of ptr = %d\n", *ptr);
    
    return (0);
}
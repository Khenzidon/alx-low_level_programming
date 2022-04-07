#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of string: %d byte(s)\n", sizeof(str));
    return(0);
}

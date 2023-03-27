#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
    int man;
    int man2;
    unsigned int gim;
    void *also;

    man = _printf("Let's try to printf a simple sentence.\n");
    man2 = printf("Let's try to printf a simple sentence.\n");
    man = _printf("Percent:[%%]\n");
    man2 = printf("Percent:[%%]\n");
    printf("man:[%d]\n", man);
    printf("man:[%d]\n", man2);
    man = _printf("got it %s \n", NULL);
    // man2 = printf("right \t %s \n", NULL);
    printf("man:[%d]\n", man);
    printf("man:[%d]\n", man2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}

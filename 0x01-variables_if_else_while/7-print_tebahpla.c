#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -  Entry point
 * Description: Print all single digit number of base 10
 * starting from 0, followed by a new line
 * Return: Always 0
 */
int main(void)
{       
        char c = 'z';

        while(c >= 'a')
        {       
                putchar(c);
                c--;
        }       
        putchar('\n');
        return (0);
}

#include <stdio.h>
/**
 * main -  Entry point
 * Description: Print the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{       
        char c = 'a';

        while(c <= 'z')
        {       
               if(c != 'e' && c != 'q')
		{
	       	putchar(c);
		}
	       c++;
	}
        putcar('\n');
        return (0);
}

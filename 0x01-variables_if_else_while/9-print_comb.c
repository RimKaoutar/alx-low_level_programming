#include <stdio.h>

int main(void)
{
    int i = 48;  
    while (i < 58)
    {
        putchar(i);
	if (i++ == 57)
	    continue;
	putchar(44);
	putchar(32);
    }
    putchar(10); 
    return (0);
}

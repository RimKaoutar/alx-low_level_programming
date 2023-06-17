#include <stdio.h>

int main(void)
{
    int i;  
    for (i = 48; i < 103; i++)
    {
	if (i > 57 && i < 97)
	    continue;
        putchar(i);
    }
    putchar('\n'); 
    return (0);
}

#include <stdio.h>

int main(void)
{
    int i = 122;  
    while (i > 96)
    {
        putchar(i--);
    }
    putchar('\n'); 
    return (0);
}

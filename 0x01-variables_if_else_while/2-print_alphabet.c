#include <stdio.h>

int main(void)
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i = 0;  
    while (i < 27)
    {
        putchar(alpha[i++]);
    } 
    return (0);
}

#include <stdio.h>

int main(void)
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
    int i = 0;  
    while (i < 53)
    {
        putchar(alpha[i++]);
    } 
    return (0);
}

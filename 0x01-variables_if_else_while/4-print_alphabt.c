#include <stdio.h>

int main(void)
{
    char alpha[] = "abcdfghijklmnoprstuvwxyz\n";
    int i = 0;  
    while (i < 25)
    {
        putchar(alpha[i++]);
    } 
    return (0);
}

#include <stdio.h>

int main(void)
{
    char alpha[] = "abcdfghijklmnoprstuvwxyz\n";
    int i;  
    for (i = 0; i < 25; i++)
    {
        putchar(alpha[i]);
    } 
    return (0);
}

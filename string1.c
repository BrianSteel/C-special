#include <stdio.h>

int main(void)
{
    for (int i= 65; i<65+26; i++)
    {
        printf("%c into %i\n", (char)i, i);
    } printf ("\nlets go again!\n\n");

    for (char c='A'; c <='Z'; c++)
    {
        printf("%c into %i\n", c, c);
    }
}

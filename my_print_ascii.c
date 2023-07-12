#include "print_char.c"

void my_print_ascii(void)
{
    int i;
    for (i=33; i<=126; i++)
    {
        print_char(i);
    }
}

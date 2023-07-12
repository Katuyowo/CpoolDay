#include "print_char.c"

void my_print_n_ascii(int howMany)
{
    int i;
    for (i=33; i<howMany+33; i++)
    {
        print_char(i);
    }
}
void print_char(char c);

void my_print_n_ascii(int howMany)
{
    int i;
    if (howMany<=126-33)
    {
        for (i=33; i<howMany+33; i++)
        {
            print_char(i);
        }
    }
}

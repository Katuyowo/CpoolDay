void print_char(char c);

int my_strlen(char *string)
{
    int j;
    for (j=0; string[j]!='\0'; j++)
    {
        ///
    }
    return j;
}

void my_print_revert(char *toRevert)
{
    int i;
    for (i=my_strlen(toRevert); i>=0; i--)
    {
        print_char(toRevert[i]);
    }
}
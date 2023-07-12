#include <stdio.h>
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

 char *my_replace_char(char *origin, char toFind, char toReplace)
{
    int i;
    for (i=0; i<my_strlen(origin); i++)
    {
        if (origin[i]==toFind)
        {
           print_char(toReplace);
        }
        else
        {
            print_char(origin[i]);
        }
    }
}

int main(void)
{
    char str[] = "bienvenue à epitech !";
    printf("%s\n", my_replace_char (str, 'e', 'a'));
    return 0;
}
#include <stdio.h>

int main()
{
    void _puts(char *str)
    {
        int n = 0;
        
        while (*str != '\0')
        {
            putchar(*str);
            str = str + 1;
        }
    }

    char *str;

    str = "";
    _puts(str);
    return (0);
}

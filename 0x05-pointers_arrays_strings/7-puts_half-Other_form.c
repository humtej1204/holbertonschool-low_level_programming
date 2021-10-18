void puts_half(char *str)
    {
        int n, c = 0;
        char *temp = str;
      
        while (*str != '\0')
        {
            c = c + 1;
            str = str + 1;
        }
        
        str = temp;
        
        for (n = 0; n < (c / 2); n++)
        {
            if (c % 2 == 0)
            {
                putchar(str[(n + (c / 2))]);
            }
            else
            {
                putchar(str[((n + 1) + (c / 2))]);
            }
        }
}

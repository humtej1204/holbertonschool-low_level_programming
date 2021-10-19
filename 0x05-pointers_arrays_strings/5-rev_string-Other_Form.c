void rev_string(char *s)
{
        char temp;
        char *c = s;
        int n, count = 0;
        
        /* Count how many characters there are in the string */
        while (*s != '\0')
        {
            count ++;
            s = s + 1;
        }
        
        /* Return s to its original value befor the counter */
        s = c;
        
        /* Replace each character of the string */
        for (n = 0; n <= (count / 2); n++)
        {
            temp = s[n];
            s[n] = s[count - 1]; /* We use [count - 1] because we need
            * the '\0' character keeps at the end of the string
            */
            s[count - 1] = temp;
            count = count - 1;
        }
}

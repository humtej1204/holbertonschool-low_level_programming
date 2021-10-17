void print_rev(char *s)
{
	int n = 0;

	/* Count how many characters there are in the string */
	while (*s != '\0')
	{
		n = n + 1;
		s = s + 1;
	}

	/* Use the last value of n to reverse count and
	* start to print from the last value to s (direction of the pointer *s)
	*/
	while (n >= 0)
	{
		putchar(*s);
		s = s - 1;
		n = n - 1;
	}
}

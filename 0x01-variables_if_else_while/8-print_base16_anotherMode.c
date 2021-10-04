int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + 87);
		}
		++n;
	}

	return (0);
}

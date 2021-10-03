int main(void)
{
	char low = 97;

	while(low <= 122)
	{
		if (low != 101 && low != 113)
		{
			putchar(low);
		}
		++low;
	}
	putchar(10);

	return(0);
}

int main(void)
{
	char low = 97;
	char up = 65;

	while(low <= 122)
	{
		putchar(low);
		++low;
	}
	while(up <= 90)
	{
		putchar(up);
		++up;
	}

	putchar(10);

	return(0);
}

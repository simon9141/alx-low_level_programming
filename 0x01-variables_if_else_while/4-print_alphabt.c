#include <stdio.h>

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}

	}
	putchar('\n');
	return (0);
}



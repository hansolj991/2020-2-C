///20200825 Á¤ÇÑ¼Ö

#include <stdio.h>

int main()
{
	int i, j, ran;

	for (i = 2; i <= 100; i++)
	{
		ran = 0;
		for (j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				ran++;
			}
		}
		if (ran == 0)
		{
			printf("%d\n", i);
		}

	}
	return 0;
}

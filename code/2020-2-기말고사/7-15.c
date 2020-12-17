//20200825 정한솔

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int input, i;
	printf("정수 입력:");
	scanf("%d", &input);

	if (input == 0)
		printf("종료\n");
	else
	{
		for (i = 31; i >= 0; i--)
		{
			if (input & (1 << i))
				printf("1");
			else
				printf("0");

		}
	}
	printf("\n");

	return 0;
}

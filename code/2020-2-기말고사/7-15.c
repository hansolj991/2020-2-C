//20200825 ���Ѽ�

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int input, i;
	printf("���� �Է�:");
	scanf("%d", &input);

	if (input == 0)
		printf("����\n");
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

//20200825 ���Ѽ�

#include <stdio.h>

int main()
{
	int a[3][2] = { 3,5,4,2,5,7 };
	int b[2][3] = { 3,8,2,2,4,6 };
	int c[3][3] = { 0 };
	int sum, i, j, k;

	for (i = 0; i < 3; i++) // i�� 0���� 2���� �ݺ�
	{
		for (j = 0; j < 3; j++) // j�� 0���� 2���� �ݺ�
		{
			sum = 0;
			for (k = 0; k < 2; k++) // k�� 0���� 1���� �ݺ� 
			{
				sum += a[i][k] * b[k][j]; // sum�� ��� ���� �߰�
				c[i][j] = sum;
			}
			printf("%d ", c[i][j]); //sum�� ���� ���
		}
		printf("\n");
	}
	return 0;
}

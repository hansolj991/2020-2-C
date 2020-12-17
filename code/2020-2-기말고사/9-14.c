//20200825 정한솔

#include <stdio.h>

int main()
{
	int a[3][2] = { 3,5,4,2,5,7 };
	int b[2][3] = { 3,8,2,2,4,6 };
	int c[3][3] = { 0 };
	int sum, i, j, k;

	for (i = 0; i < 3; i++) // i는 0에서 2까지 반복
	{
		for (j = 0; j < 3; j++) // j는 0에서 2까지 반복
		{
			sum = 0;
			for (k = 0; k < 2; k++) // k는 0에서 1까지 반복 
			{
				sum += a[i][k] * b[k][j]; // sum에 계속 합을 추가
				c[i][j] = sum;
			}
			printf("%d ", c[i][j]); //sum의 값을 출력
		}
		printf("\n");
	}
	return 0;
}

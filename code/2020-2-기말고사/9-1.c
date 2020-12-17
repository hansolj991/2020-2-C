//20200825 정한솔

#include <stdio.h>
#define SIZE 5
 
int main()
{
	double degree[SIZE];
	int i;

	degree[0] = -5.34;
	degree[1] =  3.67;
	degree[2] =  19.76;
	degree[3] =  28.76;
	degree[4] =  35.63;

	for (i = 0; i < SIZE; i++) // i는 0부터 4까지 반복
	{
		printf("%d번째 수는 %.2f\n", i + 1, degree[i]); // 배열의 모든 원소를 출력
	}

	return 0;


}
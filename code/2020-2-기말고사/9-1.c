//20200825 ���Ѽ�

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

	for (i = 0; i < SIZE; i++) // i�� 0���� 4���� �ݺ�
	{
		printf("%d��° ���� %.2f\n", i + 1, degree[i]); // �迭�� ��� ���Ҹ� ���
	}

	return 0;


}
//20200825 ���Ѽ�
#include <stdio.h>
int main(void)
{
	int i, j; //����
	for (i = 0; i < 5; i++) { // i�� 0���� 4���� �ݺ�
		for (j = 5; j > i; j--) {
			printf("%d", j); // j���
		}
		printf("\n");
	}
	return 0;
}
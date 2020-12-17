//20200825 정한솔
#include <stdio.h>
int main(void)
{
	int i, j; //선언
	for (i = 0; i < 5; i++) { // i를 0부터 4까지 반복
		for (j = 5; j > i; j--) {
			printf("%d", j); // j출력
		}
		printf("\n");
	}
	return 0;
}
/*//20200825 정한솔

#include <stdio.h>

int main() {

	int n = 0x324F3A24; // 초기화된 변수속 선언
	char* p = (char*)&n;

	for (int i = 3; i >= 0; i--) // i 는 3부터 0까지 반복
	{
		printf("%X", *(p + i)); 
	}
	printf("\n");

	return 0;
} */
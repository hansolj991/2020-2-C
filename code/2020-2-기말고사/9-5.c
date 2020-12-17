//20200825 정한솔
#include <stdio.h>

void main() {
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10, 20, 30, 40, 50, 60 };

	for (int i = 0; i < (sizeof(a) / sizeof(a[i])); i++) {
		b[i] = a[i];  // 배열 a의 첫번째~n번째 원소까지 같은 순서대로 값을복사 배열b로
	}

	for (int i = 0; i < (sizeof(b) / sizeof(b[i])); i++) {
		printf("%d ", b[i]); // 결과값 배열b를 출력
	}
}

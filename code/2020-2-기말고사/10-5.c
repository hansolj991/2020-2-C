//20200825 정한솔
#include <stdio.h>
#pragma warning(disable:4996)
int square(int a);
int cube(int b);

int main()
{
	int ran;

	printf("임의의 숫자 입력: "); // 출력
	scanf("%d", &ran); // 임의의 숫자 입력

	printf("%d의 제곱 %d\n", ran, square(ran)); //임의의 숫자를 제곱한것 출력
	printf("%d의 세제곱 %d\n", ran, cube(ran)); //임의의 숫자를 제곱한것에 한번더 곱한것 출력
	printf("%d의 다섯제곱 %d\n", ran, square(ran) * cube(ran)); //임의의 숫자를 제곱한것에 세제곱을 곱한것 출력
}

int square(int a)
{
	return (a * a); // a를 두번곱한것
}
int cube(int b)
{
	return (square(b) * b); // a를 두번곱한것에 한번더 곱한것
}


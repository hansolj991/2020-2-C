//20200825 정한솔
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void) {

	char c = '*'; // 변수 c를 *으로 선언

	char* p = &c; //  포인터 p 선언,  c의 주소값 참조



	printf("%12p  %d   %c", p, c, c); 



	return 0;

} 
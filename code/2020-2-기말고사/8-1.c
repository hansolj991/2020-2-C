//20200825 ���Ѽ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void) {

	char c = '*'; // ���� c�� *���� ����

	char* p = &c; //  ������ p ����,  c�� �ּҰ� ����



	printf("%12p  %d   %c", p, c, c); 



	return 0;

} 
/*//20200825 ���Ѽ�

#include <stdio.h>

int main() {

	int n = 0x324F3A24; // �ʱ�ȭ�� ������ ����
	char* p = (char*)&n;

	for (int i = 3; i >= 0; i--) // i �� 3���� 0���� �ݺ�
	{
		printf("%X", *(p + i)); 
	}
	printf("\n");

	return 0;
} */
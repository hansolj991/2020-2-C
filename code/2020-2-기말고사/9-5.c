//20200825 ���Ѽ�
#include <stdio.h>

void main() {
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10, 20, 30, 40, 50, 60 };

	for (int i = 0; i < (sizeof(a) / sizeof(a[i])); i++) {
		b[i] = a[i];  // �迭 a�� ù��°~n��° ���ұ��� ���� ������� �������� �迭b��
	}

	for (int i = 0; i < (sizeof(b) / sizeof(b[i])); i++) {
		printf("%d ", b[i]); // ����� �迭b�� ���
	}
}

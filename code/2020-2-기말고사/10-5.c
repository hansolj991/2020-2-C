//20200825 ���Ѽ�
#include <stdio.h>
#pragma warning(disable:4996)
int square(int a);
int cube(int b);

int main()
{
	int ran;

	printf("������ ���� �Է�: "); // ���
	scanf("%d", &ran); // ������ ���� �Է�

	printf("%d�� ���� %d\n", ran, square(ran)); //������ ���ڸ� �����Ѱ� ���
	printf("%d�� ������ %d\n", ran, cube(ran)); //������ ���ڸ� �����ѰͿ� �ѹ��� ���Ѱ� ���
	printf("%d�� �ټ����� %d\n", ran, square(ran) * cube(ran)); //������ ���ڸ� �����ѰͿ� �������� ���Ѱ� ���
}

int square(int a)
{
	return (a * a); // a�� �ι����Ѱ�
}
int cube(int b)
{
	return (square(b) * b); // a�� �ι����ѰͿ� �ѹ��� ���Ѱ�
}


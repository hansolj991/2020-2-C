//20200825 ���Ѽ�

#include <stdio.h>
#pragma warning(disable:4996)

double change(int a); //�Լ�����
int main()
{
	double num; //double�� ���� ����
	printf("��ġ�Է�: ");
	scanf("%lf", &num);
	printf("%f��ġ�� %.2fcm�Դϴ�.\n", num, change(num));
	return 0;
}
double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}
//20200825 정한솔

#include <stdio.h>
#pragma warning(disable:4996)

double change(int a); //함수선언
int main()
{
	double num; //double형 변수 선언
	printf("인치입력: ");
	scanf("%lf", &num);
	printf("%f인치는 %.2fcm입니다.\n", num, change(num));
	return 0;
}
double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}
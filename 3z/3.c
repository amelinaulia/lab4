#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int a, a1, a2, a3,a4;
	printf("������� ���������� �����: ");
	scanf_s("%d", &a);
	a1 = a / 100;
	printf("%d - �����", a1);
	a2 = a % 10;
	printf("\n%d - �������", a2);
	a3 = (a - (a1 * 100 + a2))/10;
	printf("\n%d - �������", a3);
	a4 = a1 + a2 + a3;
	printf("\n%d - ����� ���� ������� ����� ", a4);
	printf("\n%d%d%d - ����� �������� ", a2, a3, a1);
}

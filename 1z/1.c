#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	/*
	char a;
	int b;
	float c;
	float d;
	scanf_s("%c", &a);
	scanf_s("%d", &b);
	scanf_s("%f", &c);
	scanf_s("%e", &d);
	printf("%c, %d, %f, %e", a, b, c, d);

	float e,e_1;
	printf("\n������� ����� double:");
	scanf_s("%f", &e);
	e_1 = e;
	int x;
	x = (int)e;
	printf("����� ����� %d\n������� �����:%f\n", x, (e_1 - x));
	
	char f;
	scanf_s("%c", &f);
	printf("������� ����� � ���������� ������� ���������: %d\n", f);
	printf("��� ����������������� ������: %X",f);
	*/
	float g;
	printf("������� ����� � ����������: ");
	scanf_s("%f", &g);
	printf("%f", 1 / g);
}

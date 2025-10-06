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
	printf("\nвведите число double:");
	scanf_s("%f", &e);
	e_1 = e;
	int x;
	x = (int)e;
	printf("Целая часть %d\nДробная часть:%f\n", x, (e_1 - x));
	
	char f;
	scanf_s("%c", &f);
	printf("Введено число в десятичной системе счисления: %d\n", f);
	printf("Его шестнадцатеричная запись: %X",f);
	*/
	float g;
	printf("введите число с клавиатуры: ");
	scanf_s("%f", &g);
	printf("%f", 1 / g);
}
